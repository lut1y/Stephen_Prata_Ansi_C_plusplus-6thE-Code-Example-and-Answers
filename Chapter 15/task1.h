#ifndef TASK1_H_
#define TASK1_H_

namespace TASK1 {
	class Remote;
	
	class Tv {
		friend class Remote;   
		int state;
		int volume;
	public:
		enum {Off, On};
		enum {MinVal, MaxVal = 20};
		
		Tv(int s = Off) : state(s), volume(5) {}
		void onoff() { state = (state == On) ? Off : On; }
		bool ison() const { return state == On; }
	    void buzz(Remote & r);	    
		bool volup(); 		
		void settings() const;
		// ...
	};
	
	class Remote {
		friend class Tv;
		int mode;
	public:
		enum { Normal, Interactive };
		
		Remote(int m = Normal) : mode(m) {}
		bool volup(Tv & t) { t.volup(); }
		void set_mode() { mode = (mode == Normal) ? Interactive : Normal; }
		void showmode() { std::cout << "Mode: " << (mode == Normal ? "Normal\n" : "Interactive\n"); }
		// ...
	};
	
	inline void Tv::buzz(Remote & r) {
		//...
		if(ison()) r.set_mode();
	}
	
	bool Tv::volup() {
	    if (volume < MaxVal) {
	        volume++;
	        return true;
	    } else
	    	return false;
	}
	
	void Tv::settings() const {
		using std::cout;
	    using std::endl;
	    cout << "TV is " << (state == Off? "Off" : "On") << endl;
	    if (state == On) {
	        cout << "Volume setting = " << volume << endl;	        
//	        cout << "Remote mode = " << volume << endl;	        
	        
	    }
	}
}
#endif
