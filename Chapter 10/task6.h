#ifndef _TASK6_H_
#define _TASK6_H_
	class Move {
		private:
			double x;
			double y;
		public:
			Move(double a=0, double b=0); // ������������� x, y � a, b
			showmove() const;			  // ���������� ������� �������� x, y
			Move add(const Move & m) const;
			
			// ��� ������� ��������� x �� m � x ����������� �������
			// ����� �������� ����� �������� �,
			// ��������� � �� m � � ����������� �������, ����� �������� �����
			// �������� �, ����������� ������������������� ������� �������� �, �
			// � ���������� ���
			reset(double a=0, double b=0); // ���������� x, y �  a, b
	};
#endif
