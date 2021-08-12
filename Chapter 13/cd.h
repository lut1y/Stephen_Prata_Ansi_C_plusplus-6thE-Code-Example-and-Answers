#ifndef _CD_H_
#define _CD_H_
// ������� �����
class Cd {
	private:
		char perfomers[50];	// �����������
		char label[20];		// ��������
		int selections;		// ���������� ���������
		double playtime;	// ����� ��������������� � �������
	public:
		Cd(char * s1, char * s2, int n, double x);
		Cd(const Cd & d);
		Cd();
		virtual ~Cd();
		virtual void Report() const;	// ������� ��� ������ � �������-�����
		Cd & operator=(const Cd & d);
};
#endif
