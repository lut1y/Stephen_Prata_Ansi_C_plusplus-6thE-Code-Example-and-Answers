#ifndef TASK4_H_
#define TASK4_H_

#include <stdexcept>
#include <string>

using std::string;
namespace TASK4 {
	class Sales {
	public:
	    enum {MONTHS = 12};   // может быть статической константой
	    
	    class bad_index : public std::logic_error {
	    private:
	        int bi;  // недопустимое значение индекса
	    public:
	        explicit bad_index(int ix,
	            const std::string & s = "Index error in Sales object\n");
	        int bi_val() const {return bi;}
	        virtual ~bad_index() throw() {}
	    };
	    
	    explicit Sales(int yy = 0);
	    Sales(int yy, const double * gr, int n);
	    virtual ~Sales() { }
	    int Year() const { return year; }
	    virtual double operator[](int i) const;
	    virtual double & operator[](int i);
	private:
	    double gross[MONTHS];
	    int year;
	};
	
	class LabeledSales : public Sales {
	  public:
	  	
	    class nbad_index : public Sales::bad_index {
	    private:
	        std::string lbl;
	    public:
	        nbad_index(const std::string & lb, int ix,
	           const std::string & s = "Index error in LabeledSales object\n");
	        const std::string & label_val() const {return lbl;}
	        virtual ~nbad_index() throw() {}
	    };
	    
	    explicit LabeledSales(const std::string & lb = "none", int yy = 0);
	    LabeledSales(const std::string & lb, int yy, const double * gr, int n);
	    virtual ~LabeledSales() { }
	    const std::string & Label() const {return label;}
	    virtual double operator[](int i) const;
	    virtual double & operator[](int i);
	private:
	    std::string label;
	};
	
	// ***** Описание методов *****
	Sales::bad_index::bad_index(int ix, const string & s )
	    : std::logic_error(s), bi(ix) {}
	
	Sales::Sales(int yy) {
	    year = yy;
	    for (int i = 0; i < MONTHS; ++i)
	        gross[i] = 0;
	}
	
	Sales::Sales(int yy, const double * gr, int n) {
	    year = yy;
	    int lim = (n < MONTHS)? n : MONTHS;
	    int i;
	    for (i = 0; i < lim; ++i)
	        gross[i] = gr[i];
	    // для i > n и i < MONTHS
	    for ( ; i < MONTHS; ++i)
	        gross[i] = 0;
	}
	
	double Sales::operator[](int i) const {
	    if(i < 0 || i >= MONTHS)
	        throw bad_index(i);
	    return gross[i];
	}
	
	double & Sales::operator[](int i) {
	    if(i < 0 || i >= MONTHS)
	        throw bad_index(i);
	    return gross[i];
	}
	
	LabeledSales::nbad_index::nbad_index(const string & lb, int ix,
	           const string & s ) : Sales::bad_index(ix, s) {
	    lbl = lb;
	}
	
	LabeledSales::LabeledSales(const string & lb, int yy)
	         : Sales(yy) {
	    label = lb;
	}
	
	LabeledSales::LabeledSales(const string & lb, int yy, const double * gr, int n)
	        : Sales(yy, gr, n) {
	    label = lb;
	}
	
	double LabeledSales::operator[](int i) const {    
		if(i < 0 || i >= MONTHS)
	        throw nbad_index(Label(), i);
	    return Sales::operator[](i);
	}
	
	double & LabeledSales::operator[](int i) {
	    if(i < 0 || i >= MONTHS)
	        throw nbad_index(Label(), i);
	    return Sales::operator[](i);
	}
}
#endif
