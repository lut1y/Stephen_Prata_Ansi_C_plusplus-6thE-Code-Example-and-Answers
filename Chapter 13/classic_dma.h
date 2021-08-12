#include "cd_dma.h"

#ifndef _CLASSIC_DMA_H_
#define _CLASSIC_DMA_H_
class Classic_dma : public Cd_dma {
	private:
		char * main_composition;	// исполнитель
	public:
		Classic_dma(char * s1 = "undefined perfomer",
			char * s2 = "noname artists", 
			char * mc = "noname", int n = 0,
			double x = 0.0);
		Classic_dma(const Cd_dma & d, char * mc = "noname");		
		virtual ~Classic_dma();
		virtual void Report() const;	// выводит все данные о компакт-диске
		Classic_dma & operator=(const Classic_dma & d);
};
#endif
