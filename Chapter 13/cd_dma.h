#ifndef _CD_DMA_H_
#define _CD_DMA_H_
class Cd_dma {
	private:
		char * perfomers;	// �����������
		char * label;		// ��������
		int selections;		// ���������� ���������
		double playtime;	// ����� ��������������� � �������
	public:
		Cd_dma(char * s1, char * s2, int n, double x);
		Cd_dma(const Cd_dma & d);
		Cd_dma();
		virtual ~Cd_dma();
		virtual void Report() const;	// ������� ��� ������ � �������-�����
		Cd_dma & operator=(const Cd_dma & d);
};
#endif
