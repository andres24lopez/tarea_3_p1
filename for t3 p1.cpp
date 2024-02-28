#include <iostream>
using namespace std;

main (){
	//i++, i+=1, 
int inicio=0,final=0, res =0;
	
	cout<<"ingrese el inicio: ";
	cin>>inicio;
	cout<<"ingrese el final: ";
	cin>>final;
	
	for(int rango=inicio;rango<=final;rango++){
		cout<<"tabla del "<<rango<<endl;
			for (int i=1;i<=10;i++){
		
		
		res= rango * i;
		cout<<rango<<"x"<<i<<"="<<res<<endl;
	}
		
		
	}






		
	
	system("pause");
}
