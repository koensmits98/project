#include<iostream>

using namespace std;




int main(){

    vector<string> lijst = {
"romain.bertonazzi@u-psud",
"camilo.cordero-ramirez@u-psud",
"louis-henri.fernandez@u-psud",
"dahbia.gaci@u-psud",
"sandra.gyasi@u-psud",
"md-ariful.islam@u-psud",
"etienne.kukielczynski@u-psud",
"yuming.ma@u-psud",
"jiapeng.ma@u-psud",
"joseph.nemer@u-psud",
"yannick.popovitch@u-psud",
"yuxue.shang@u-psud",
"sabrina.abrouche@u-psud",
"orxan.akbarov@u-psud",
"cansu.bozel@u-psud",
"malo.diennet@u-psud",
"german.garzon-losik@u-psud",
"julie.goyet@u-psud",
"amanda.miels-de-sousa@u-psud",
"vinicius.oliveira-cavalcanti@u-psud",
"akhilesh-harendra.shrotre@u-psud",
"nohaiza.ul-hassan-shah@u-psud"};


string shortest = lijst[0];
string longest = lijst[0];

for(auto adress : lijst) {
    if (adress.length() < shortest.length()) {
        shortest = adress;
}
    if (adress.length() > longest.length()) {
        longest = adress;
    }
}
cout << "shortest:  " << shortest << "  ,longest:  " << longest << endl;


}

