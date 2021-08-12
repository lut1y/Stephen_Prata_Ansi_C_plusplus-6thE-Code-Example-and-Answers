#ifndef _TASK6_H_
#define _TASK6_H_
	class Move {
		private:
			double x;
			double y;
		public:
			Move(double a=0, double b=0); // устанавливает x, y в a, b
			showmove() const;			  // отображает текущие значения x, y
			Move add(const Move & m) const;
			
			// Эта функция добавляет x из m к x вызывающего объекта
			// чтобы получить новое значение х,
			// Добавляет у из m к у вызывающего объекта, чтобы получить новое
			// значение у, присваивает инициализированному объекту значения х, у
			// и возвращает его
			reset(double a=0, double b=0); // сбрасывает x, y в  a, b
	};
#endif
