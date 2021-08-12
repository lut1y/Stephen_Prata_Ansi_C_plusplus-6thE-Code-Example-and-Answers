#include <iostream>

#ifndef TASK3_H_
#define TASK3_H_

// абстрактный класс
class BaseABC {
private:
	char * label;
	int rating;
public:
	BaseABC(const char * l = "null", int r = 0);
	BaseABC(const BaseABC & rs);
	virtual void View() const = 0;
	virtual ~BaseABC();
	BaseABC & operator=(const BaseABC & rs);
	friend std::ostream & operator<<(std::ostream & os, 
                                     const BaseABC & rs);
};

// использующий динамическое выделение памяти
class baseDMA3 : public BaseABC {
	public:
	    baseDMA3(const char * l = "null", int r = 0) :
			BaseABC(l, r) {};
	    baseDMA3(const baseDMA3 & rs) : BaseABC(rs) {};
	    virtual void View() const;
	    virtual ~baseDMA3() {};
	    baseDMA3 & operator=(const baseDMA3 & rs);
		friend std::ostream & operator<<(std::ostream & os, 
                                     const baseDMA3 & rs);	    	    
};

// Производный класс без динамического выделения памяти
// Деструктор не нужен
// используется неявный конструктор копирования
// используется неявная операция присваивания
class lacksDMA3 : public BaseABC {
private:
    enum { COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA3(const char * c = "blank", const char * l = "null",
              int r = 0);   
    lacksDMA3(const char * c, const baseDMA3 & rs);    
    virtual void View() const;
    friend std::ostream & operator<<(std::ostream & os, 
                                    const lacksDMA3 & rs);
};

// производный класс с динамическим выделением памяти
class hasDMA3 : public BaseABC {
private:
    char * style;
public:
    hasDMA3(const char * s = "none", const char * l = "null",
              int r = 0);
    hasDMA3(const char * s, const BaseABC & rs);
    hasDMA3(const hasDMA3 & hs);
    virtual void View() const;
    virtual ~hasDMA3();
    hasDMA3 & operator=(const hasDMA3 & rs);  
    friend std::ostream & operator<<(std::ostream & os, 
                                     const hasDMA3 & rs);
};

#endif
