#include <sstream>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <string>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <getopt.h>

/*
1. Software; Execute.
2. In order to rename investment; Execute.
3. In order to financial rehashtag; Execute.
4. In order to publish and broadcast share dividend; Execute.
*/
using namespace std;

string balnet;
bool version();
int fill_td_bar();
int dl_prices();
void ethereum(string &balnet);
void bitcoin(string &balnet);
void litecoin(string &balnet);

int main (int argc, char **argv)        {
/*
//February 11, 2021
//Oliver Nowell Bowe
//ॐ
//佛教
//Official version 1.3.0 (executable)
*/
for(;;)
{
  switch(getopt(argc, argv, "belhv")) // note the colon (:) to indicate that 'b' has a parameter and is not a switch
  {
   case 'b':
        cout << endl;
        cout << "\nWithout HTML to display current information online there is no other communication between the customer." << endl;
        dl_prices();
        cout << "All prices are directly from www.cryptocurrencychart.com" << endl ;
        cout << endl;
        cout << "K|234 (KTHZR) \n" << endl;
        printf("%*d %s ",10,1,"BTC");
        bitcoin(balnet);
        cout << setw(1) << balnet << endl;
        fill_td_bar();
        return 1;

   case 'e':
        cout << endl; 
        cout << "\nWithout HTML to display current information online there is no other communication between the customer." << endl;
        dl_prices();
        cout << "All prices are directly from www.cryptocurrencychart.com" << endl ;
        cout << endl;
        cout << "K|234 (KTHZR) \n" << endl;
        fill_td_bar();
        printf("%*d %s ",10,1,"ETH");
        ethereum(balnet);
        cout << setw(1) << balnet << endl;
        return 1;  

   case 'l':
        cout << endl; 
        cout << "\nWithout HTML to display current information online there is no other communication between the customer." << endl;
        dl_prices();
        cout << "All prices are directly from www.cryptocurrencychart.com" << endl ;
        cout << endl;
        cout << "K|234 (KTHZR) \n" << endl;
        printf("%*d %s ",10,1,"LTC");
        litecoin(balnet);
        cout << setw(1) << balnet << endl;
        fill_td_bar();
        return 1;  

    case 'v':
        cout << endl;
        cout << "Keep Installing Software Online" << setw(2) << " " << "(K E T A H A Z U R E)" << endl;
        printf("\nKoinmon Version: 1.3.0");
        printf("\nThis tool was created to display inline tables of cryptocurrency prices. Developed by Oliver Nowell Bowe <ketahazure@ketahazure.net> for educational and investment professional business only.");
        return 1;

    case 'h':
        cout << endl;
        cout << "Usage" << endl;
        cout << setw(3) << " " << "Koinmon" << setw(3) << " " << "[options]" << setw(3) << " "<< "<variables>\n"<< endl;
        cout << "Options:" << endl;
        cout << setw(3) << " " << "<variables>" << setw(6) << " " << setw(2) << " " << "TX or Address" << endl;
        cout << setw(3) << " " << "-b" << setw(12) << " " << "display current price information for Bitcoin" << endl;
        cout << setw(3) << " " << "-l" << setw(12) << " " << "display current price information for Litecoin" << endl;
        cout << setw(3) << " " << "-e" << setw(12) << " " << "display current price information for Ethereum" << endl;
        cout << setw(3) << " " << "-v" << setw(12) << " " << "Print version" << endl;
        cout << setw(3) << " " << "-h" << setw(12) << " " << "Show this help menu" << endl;
        return 1;

    default :
        version();
        break;

    case -1:
        version();
        break;
  }
  break;
}
cout << "\nWithout HTML to display current information online there is no other communication between the customer." << endl;
dl_prices();
cout << "All prices are directly from www.cryptocurrencychart.com" << endl ;
cout << endl;
cout << "K|234 (KTHZR) \n" << endl;
/*
printf("%*d %s ",10,1,"ETC");
cout << setw(1) << Etc << endl;
fill_td_bar();
*/
printf("%*d %s ",10,1,"LTC");
litecoin(balnet);
cout << setw(1) << balnet << endl;
dl_prices();
fill_td_bar();
printf("%*d %s ",10,1,"ETH");
ethereum(balnet);
cout << setw(1) << balnet << endl;
dl_prices();
fill_td_bar();
printf("%*d %s ",10,1,"BTC");
bitcoin(balnet);
cout << setw(1) << balnet << endl;
fill_td_bar();
return 0;
        }

int fill_td_bar()
{
#define STRINGSIZE 2
char buff[STRINGSIZE + 1];
int length = snprintf(buff, sizeof(buff),"\n",2);
for (int i = STRINGSIZE - length; i > 0; i--)
{
    puts("K|etahazure-------------------------------------------------- \n");
}
printf("%s\n", buff);
}

bool version()
{
puts("http://www.ketahazure.net");
system("rm KTHZR.txt");
return false;
}

int dl_prices()
{
ofstream io_write;
io_write.open("KTHZR.sh");
io_write << "#!/bin/sh" << endl << "#" << endl << "wget -O KTHZR.txt  -q https://www.cryptocurrencychart.com/ --no-check-certificate" << endl;
system("bash KTHZR.sh");
system("rm KTHZR.sh");
}

void bitcoin(string &balnet)
{
ifstream io_read;
system("cat KTHZR.txt | grep BTC >> K_T_H_Z_R.txt");
system("cat K_T_H_Z_R.txt | grep title | uniq > KTHZR.txt");
io_read.open("KTHZR.txt");
io_read.close();
io_read.peek();
io_read.sync();
FILE *f = fopen("KTHZR.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("KTHZR.txt");
std::stringstream buffer;
buffer << in.rdbuf();
std::string test = buffer.str();
system("rm K_T_H_Z_R.txt");
system("rm KTHZR.txt");
size_t pos1 = 0;
size_t pos2;
size_t pos3;        
std::string str[2];
for (int x=0; x<=2; x++)    {
pos2 = test.find("$", pos1); 
pos3 = test.find("</td>", pos1);
str[x] = test.substr(pos2,pos3+5);
//printf("%s\n",str[x].c_str());
balnet = str[x].c_str();
                                }
}

void litecoin(string &balnet)
{
ifstream io_read;
system("cat KTHZR.txt | grep LTC >> K_T_H_Z_R.txt");
system("cat K_T_H_Z_R.txt | grep title | uniq > KTHZR.txt");
io_read.open("KTHZR.txt");
io_read.close();
io_read.peek();
io_read.sync();
FILE *f = fopen("KTHZR.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("KTHZR.txt");
std::stringstream buffer;
buffer << in.rdbuf();
std::string test = buffer.str();
system("rm K_T_H_Z_R.txt");
system("rm KTHZR.txt");
size_t pos1 = 0;
size_t pos2;
size_t pos3;        
std::string str[2];
for (int x=0; x<=2; x++)    {
pos2 = test.find("$", pos1); 
pos3 = test.find("<", pos1);
str[x] = test.substr(pos2,pos3+2);
//printf("%s\n",str[x].c_str());
balnet = str[x].c_str();
                                }
}

void ethereum(string &balnet)
{
ifstream io_read;
system("cat KTHZR.txt | grep ETH >> K_T_H_Z_R.txt");
system("cat K_T_H_Z_R.txt | grep title | uniq > KTHZR.txt");
io_read.open("KTHZR.txt");
io_read.close();
io_read.peek();
io_read.sync();
FILE *f = fopen("KTHZR.txt", "rb");
fseek(f, 0, SEEK_END);
long fsize = ftell(f);
fseek(f, 0, SEEK_SET);
char *string = (char *)malloc(fsize + 1);
fread(string, fsize, 1, f);
fclose(f);
string[fsize] = 0;
std::ifstream in("KTHZR.txt");
std::stringstream buffer;
buffer << in.rdbuf();
std::string test = buffer.str();
system("rm K_T_H_Z_R.txt");
system("rm KTHZR.txt");
size_t pos1 = 0;
size_t pos2;
size_t pos3;        
std::string str[2];
for (int x=0; x<=2; x++)    {
pos2 = test.find("$", pos1); 
pos3 = test.find("td", pos1);
str[x] = test.substr(pos2,pos3+2);
//printf("%s\n",str[x].c_str());
balnet = str[x].c_str();
                                }

}

class K {
        private:
//const string K_ = "http://www.ketahazure.net";
public:
//K(): K_() {} 
void KTHZR(string);
}; 

K K1;
