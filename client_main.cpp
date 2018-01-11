


#include "Client.h"


int main(int argc, char const *argv[])
{
	cout << "Creating Server"<<endl;

	Server* tcp = Server::instance();
	tcp->createUDPSocket(atoi(argv[1]));


	//while(true){
		cout << "Accepting user\n";
		tcp->acceptUser();
	//}

	
	return 0;
}