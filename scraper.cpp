#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

string cbtext;
bool all1 = 1, bp1 = 0, dp1 = 0, ci1 = 0, all2 = 1, name2 = 0, price2 = 0, dauc2 = 0, class2 = 0, lvl2 = 0, grade2 = 0, dcount2 = 0, link2 = 0, open1 = 0;
bool c = 0, e = 0;

//output into text file
//search for certain rarities/hat names/levels etc.
//add feature to show all hats
//place limits in main function, send value when calling respective functions

void typers(char skey) {
	//typers version1: a-z, :-./
	//syntax: typers(' ');
	switch(skey) {
		case 'a':
			keybd_event(0x41, 0, 0, 0);
			break;
		case 'b':
			keybd_event(0x42, 0, 0, 0);
			break;
		case 'c':
			keybd_event(0x43, 0, 0, 0);
			break;
		case 'd':
			keybd_event(0x44, 0, 0, 0);
			break;
		case 'e':
			keybd_event(0x45, 0, 0, 0);
			break;
		case 'f':
			keybd_event(0x46, 0, 0, 0);
			break;
		case 'g':
			keybd_event(0x47, 0, 0, 0);
			break;
		case 'h':
			keybd_event(0x48, 0, 0, 0);
			break;
		case 'i':
			keybd_event(0x49, 0, 0, 0);
			break;
		case 'j':
			keybd_event(0x4a, 0, 0, 0);
			break;
		case 'k':
			keybd_event(0x4b, 0, 0, 0);
			break;
		case 'l':
			keybd_event(0x4c, 0, 0, 0);
			break;
		case 'm':
			keybd_event(0x4d, 0, 0, 0);
			break;
		case 'n':
			keybd_event(0x4e, 0, 0, 0);
			break;
		case 'o':
			keybd_event(0x4f, 0, 0, 0);
			break;
		case 'p':
			keybd_event(0x50, 0, 0, 0);
			break;
		case 'q':
			keybd_event(0x51, 0, 0, 0);
			break;
		case 'r':
			keybd_event(0x52, 0, 0, 0);
			break;
		case 's':
			keybd_event(0x53, 0, 0, 0);
			break;
		case 't':
			keybd_event(0x54, 0, 0, 0);
			break;
		case 'u':
			keybd_event(0x55, 0, 0, 0);
			break;
		case 'v':
			keybd_event(0x56, 0, 0, 0);
			break;
		case 'w':
			keybd_event(0x57, 0, 0, 0);
			break;
		case 'x':
			keybd_event(0x58, 0, 0, 0);
			break;
		case 'y':
			keybd_event(0x59, 0, 0, 0);
			break;
		case 'z':
			keybd_event(0x5a, 0, 0, 0);
			break;
		case '~':
			keybd_event(0xC0, 0, 0, 0);
			break;
		case '-':
			keybd_event(0xBD, 0, 0, 0);
			break;
		case ':':
			keybd_event(0x10, 0, 0, 0);
			keybd_event(0xBA, 0, 0, 0);
			keybd_event(0x10, 0, 0x0002, 0);
			break;
		case '/':
			keybd_event(0xBF, 0, 0, 0);
			break;
		case '.':
			keybd_event(0xBE, 0, 0, 0);
			break;
	}
	Sleep(10);
}

void typerf(string fkey, bool &c, bool &e) {
	//typerf version 2: ctrl, enter
	//syntax: typerf(" ", c, e);
	if (fkey == "ctrl") {
		if (c == 0) {
			keybd_event(0x11, 0, 0, 0);
			c = 1;
		} else {
			keybd_event(0x11, 0, 0x0002, 0);
			c = 0;
		}
	}
	if (fkey == "enter") {
	    if (e == 0) {
			keybd_event(0x0D, 0, 0, 0);
			e = 1;
		} else {
			keybd_event(0x0D, 0, 0x0002, 0);
			e = 0;
		}
	}
}

void clipboard(string& cbtext) {
	HANDLE clip;
	if (OpenClipboard(NULL)) {
		clip = GetClipboardData(CF_TEXT);
		CloseClipboard();
	}
	cbtext = (char*)clip;
}

void numberofeachpaint(string cbtext) {
	cout << ":: Basic information about painted hats ::" << endl;
	string sub = "";
	size_t pos = cbtext.find(sub, 0);
	int numofpaint = 0;
	int paintno = 1;
	int totalpaint = 0;
	
	while (paintno < 30) {
		switch(paintno) {
			case 1:
				sub = "A Color Similar to Slate";
				break;
			case 2:
				sub = "A Deep Commitment to Purple";
				break;
			case 3:
				sub = "A Distinctive Lack of Hue";
				break;
			case 4:
				sub = "A Mann's Mint";
				break;
			case 5:
				sub = "After Eight";
				break;
			case 6:
				sub = "Aged Moustache Grey";
				break;
			case 7:
				sub = "An Extraordinary Abundance of Tinge";
				break;
			case 8:
				sub = "Australium Gold";
				break;
			case 9:
				sub = "Color No. 216-190-216";
				break;
			case 10:
				sub = "Dark Salmon Injustice";
				break;
			case 11:
				sub = "Drably Olive";
				break;
			case 12:
				sub = "Indubitably Green";
				break;
			case 13:
				sub = "Mann Co. Orange";
				break;
			case 14:
				sub = "Muskelmannbraun";
				break;
			case 15:
				sub = "Noble Hatter's Violet";
				break;
			case 16:
				sub = "Peculiarly Drab Tincture";
				break;
			case 17:
				sub = "Pink as Hell";
				break;
			case 18:
				sub = "Radigan Conagher Brown";
				break;
			case 19:
				sub = "The Bitter Taste of Defeat and Lime";
				break;
			case 20:
				sub = "The Color of a Gentlemann's Business Pants";
				break;
			case 21:
				sub = "Ye Olde Rustic Colour";
				break;
			case 22:
				sub = "Zepheniah's Greed";
				break;
			case 23:
				sub = "An Air of Debonair";
				break;
			case 24:
				sub = "Balaclavas Are Forever";
				break;
			case 25:
				sub = "Cream Spirit";
				break;
			case 26:
				sub = "Operator's Overalls";
				break;
			case 27:
				sub = "Team Spirit";
				break;
			case 28:
				sub = "The Value of Teamwork";
				break;
			case 29:
				sub = "Waterlogged Lab Coat";
				break;
//			case :
//				sub = "";
//				break;
//			
		}
		pos = cbtext.find(sub, 0);
		while(pos != string::npos) {
			++numofpaint;
			++totalpaint;
			pos = cbtext.find(sub,pos+1);
		}
		cout << paintno++ << ". " << sub << ": " << numofpaint << endl;
		numofpaint = 0;
	}
	cout << "Total number of painted hats: " << totalpaint << endl;
	cout << "! Remember to scroll up to view ALL info !" << endl << endl << endl;
}

void copycontent() {
	Sleep(2000);
	typerf("ctrl", c, e);
	typers('a');
	typerf("ctrl", c, e);
	typerf("ctrl", c, e);
	typers('c');
	typerf("ctrl", c, e);
	Sleep(2000);
}

int hname(string spechatinfo) {
	int hatnameupperlimit = 75;
	string name;
		if (spechatinfo.find("<span class='quality11'>") != string::npos) {
			name = spechatinfo.substr(spechatinfo.find("<span class='quality11'>") + 24, hatnameupperlimit);
			name.erase(name.find("</span>"), hatnameupperlimit - name.find("</span>"));
		} else {
			if (spechatinfo.find("data-title=\"") != string::npos) {
				name = spechatinfo.substr(spechatinfo.find("data-title=\"") + 12, hatnameupperlimit);
				if (name.find("<span class='quality11'>") != string::npos) {
					name.erase(0, 24);
				}
				name.erase(name.find("\" data-defindex"), hatnameupperlimit - name.find("\" data-defindex"));
			} else {
				return 691;
			}
		}
		if (name.find("&amp;apos;") != string::npos) {
			name.replace(name.find("&amp;apos;"), 10, "'"); 
		}
		cout << "Name: " << name << endl;
		return 0;
}

void hprice(string shi) {
	string price = shi.substr((shi.find("Costs ")) + 6);
	int next = price.find("<br/>");
	price = price.erase(next, price.length() - next);
	cout << "Price: " << price << endl;
}

void hclass(string shi) {
	string classs = shi.substr((shi.find("data-classes=\"")) + 14);
	int next = classs.find("\" data");
	classs = classs.erase(next, classs.length() - next);
	cout << "Class: " << classs << endl;
}

void hdauc(string shi) {
	cout << "Dutch auction: ";
	bool dauc;
	if (shi.find("This item will decrease in price shortly.") != string::npos) {
		dauc = 1;
		cout << "On";
	} else {
		dauc = 0;
		cout << "Off";
	}
	cout << endl;
}

void hlevel(string shi) {
	string level = shi.substr((shi.find("Level ")) + 6);
	int next = level.find("<br/>");
	level = level.erase(next, level.length() - next);
	cout << "Level: " << level << endl;
}

void hgrade(string shi) {
	string rarity = "None";
	if (shi.find("rarity") != string::npos) {
		rarity = shi.substr(shi.find("rarity"));
		rarity = rarity.substr((rarity.find(">")) + 1);
		rarity = rarity.erase(rarity.find("<"), (rarity.length() - rarity.find("<")));
	}
	cout << "Rarity: " << rarity << endl;
}

void hdiscount(string shi) {
	string discount = "None";
	string origprice = "Not applicable";
	if (shi.find("off original price") != string::npos) {
		discount = shi.substr((shi.find("off original price")) - 24);
		discount = discount.substr((discount.find("\'>")) + 2);
		discount = discount.erase(discount.find("off"), (discount.length() - discount.find("off")));
		origprice = shi.substr((shi.find("original price of ")) + 18);
		origprice = origprice.erase(origprice.find("</span>"), origprice.length() - origprice.find("</span>"));
	}
	cout << "Discount: " << discount << endl;
	cout << "Original price: " << origprice << endl;
}

void hlink(const string shi) {
	string link = "None";
	if (shi.find("(https://") != string::npos) {
		link = shi.substr((shi.find("(https://") + 1));
		link = link.erase((link.find("png);") + 3), (link.length() - (link.find("png);") + 3)));
	}
	cout << "Link: " << link << endl;
}

//class (multi/all(?))
//level
//rarity
//dutch auction?
//price
//discounted?
//image url?


void hatwithpaint(string cbtext, bool all2, bool name2, bool price2, bool dauc2, bool class2, bool lvl2, bool grade2, bool dcount2, bool link2) {
	cout << ":: Detailed information about painted hats ::" << endl;
	string sub = "";
	size_t pos = cbtext.find(sub, 0);
	int numofpaintedhats = 0;
	int totalpaint = 0;
	string lineone = "", linetwo = "", spechatinfo = "";
	unsigned long int upperlimit = 1000000;
	sub = "Painted ";
	pos = cbtext.find(sub, 0);
	while(pos != string::npos) {
		++totalpaint;
		if (pos > upperlimit) break;
		string lineone = cbtext.substr((pos-200), 200);
		string linetwo = cbtext.substr(pos, 600);
		spechatinfo = lineone + linetwo;
		//cout << spechatinfo; //for debugging
		cout << totalpaint << ". ";
		if (all2 == 1 || name2 == 1) {
			hname(spechatinfo);
		}
		if (all2 == 1 || price2 == 1) {
			hprice(spechatinfo);
		}
		if (all2 == 1 || dauc2 == 1) {
			hdauc(spechatinfo);
		}
		if (all2 == 1 || dcount2 == 1) {
			hdiscount(spechatinfo);
		}
		if (all2 == 1 || class2 == 1) {
			hclass(spechatinfo);       //add support for "multi / all(?)" and also non-singles like 'data-classes="sniper spy"'
		}
		if (all2 == 1 || lvl2 == 1) {
			hlevel(spechatinfo);
		}
		if (all2 == 1 || grade2 == 1) {
			hgrade(spechatinfo);
		}
		if (all2 == 1 || link2 == 1) {
			hlink(spechatinfo);
		}
		cout << endl;
		pos = cbtext.find(sub,pos+1);
	}
	cout << "Total number of painted hats: " << totalpaint << endl;
	cout << "! Remember to scroll up to view ALL info !" << endl << endl << endl;	
}

string custominfo() {
	cout << ":: scraper created by Gerrard ::" << endl;
	cout << ":: steam: flyingflyflyer ::" << endl;
	Sleep(5000);
	return "found";
}

void open() {
	system("start chrome.exe");
	Sleep(500);
	typers('v');typers('i');typers('e');typers('w');typers('-');typers('s');typers('o');typers('u');typers('r');typers('c');typers('e');typers(':');typers('h');typers('t');typers('t');typers('p');typers('s');typers(':');typers('/');typers('/');typers('s');typers('c');typers('r');typers('a');typers('p');typers('.');typers('t');typers('f');typers('/');typers('b');typers('u');typers('y');typers('/');typers('h');typers('a');typers('t');typers('s');
	typerf("enter", c, e);
	typerf("enter", c, e);
	Sleep(4000);
}

void redirect(bool all1, bool bp1, bool dp1, bool ci1, bool all2, bool name2, bool price2, bool dauc2, bool class2, bool lvl2, bool grade2, bool dcount2, bool link2, bool open1) {
	if (ci1 == 1) {
		custominfo();
	}
//	if (all1 == 1 || open1 == 1) {
//		open();
//	}
	if (all1 == 1 || bp1 == 1) {
	   numberofeachpaint(cbtext);	
	}
	if (all1 == 1 || dp1 == 1) {
		hatwithpaint(cbtext, all2, name2, price2, dauc2, class2, lvl2, grade2, dcount2, link2);
	}
}

void query(bool &all1, bool &bp1, bool &dp1, bool &ci1, bool &all2, bool &name2, bool &price2, bool &dauc2, bool &class2, bool &lvl2, bool &grade2, bool &dcount2, bool &link2, bool &open1) {
	string lopts = "";
	cout << ":: scraper v1.0 ::" << endl;
	cout << "launch options - ";
	cout << "default: all; all -a; basic paints -bp; detailed paints -dp (default: all; all /a; name /n; price /p; dutch auction /da; class /c; level /le; grade /g; discount /di; link /li); open website -o" << endl;
	cout << "!! Remember to open the page source after entering the launch options if you did not select -o !!" << endl;
	getline(cin, lopts);
	if (lopts.find("-") != string::npos) {
		if (lopts.find("-bp") != string::npos) {
			bp1 = 1;
			all1 = 0;
		} 
		 if (lopts.find("-dp") != string::npos) {
			dp1 = 1;
			all1 = 0;
		} 
		 if (lopts.find("-ci") != string::npos) {
			ci1 = 1;
			all1 = 0;
		}
		if (lopts.find("-a") != string::npos) {
			all1 = 1;
		}
		if (lopts.find("-o") != string::npos) {
			open1 = 1;
		}
	}
	if (lopts.find("/") != string::npos) {
		if (lopts.find("/n") != string::npos) {
			name2 = 1;
			all2 = 0;
		} 
		if (lopts.find("/p") != string::npos) {
			price2 = 1;
			all2 = 0;
		} 
		if (lopts.find("/d") != string::npos) {
			dauc2 = 1;
			all2 = 0;
		} 
		if (lopts.find("/c") != string::npos) {
			class2 = 1;
			all2 = 0;
		} 
		if (lopts.find("/le") != string::npos) {
			lvl2 = 1;
			all2 = 0;
		} 
		if (lopts.find("/g") != string::npos) {
			grade2 = 1;
			all2 = 0;
		} 
		if (lopts.find("/d") != string::npos) {
			dcount2 = 1;
			all2 = 0;
		} 
		if (lopts.find("/li") != string::npos) {
			link2 = 1;
			all2 = 0;
		}
		if (lopts.find("/a") != string::npos) {
			all2 = 1;
		}
	}
	if (all1 == 1 || open1 == 1) {
		open();
	}
}

void exit() {
	cout << endl << "press any key to exit";
	system("pause >nul");
}

int main() {
	query(all1, bp1, dp1, ci1, all2, name2, price2, dauc2, class2, lvl2, grade2, dcount2, link2, open1);
	copycontent();
	clipboard(cbtext);
	redirect(all1, bp1, dp1, ci1, all2, name2, price2, dauc2, class2, lvl2, grade2, dcount2, link2, open1);
	exit();
	return 0;
}
