//let catch take full control of args and config
#define CATCH_CONFIG_RUNNER
#include"catch2/catch.hpp"
int main(int argc,char* argv[]){
	int result=Catch::Session().run(argc,argv);
	return result;
}
/*
//ammend config
#define CATCH_CONFIG_RUNNER
#include"catch2/catch.hpp"
int main(int argc,char*argv[]){
	Catch::Session session;
	int returnCode=session.applyCommandLine(argc,argv);
	if(returnCode!=0)//indicates a command line error
		return returnCode;
	int numFailed=session.run();
	return numFailed;
}
*/
/*
//composing custom command line options with clara
#define CATCH_CONFIG_RUNNER
#include"catch2/catch.hpp"
int main(int argc,char*argv[]){
	Catch::Session session;
	int height=0;
	auto cli=session.cli()|Catch::clara::Opt(height,"height")["-g"]["--height"]("how high?");
	session.cli(cli);
	int returnCode=session.applyCommandLine(argc,argv);
	if(returnCode!=0)/*indicates a cli err*/return returnCode;
	if(height>0)std::cout<<"height:"<<height<<std::endl;
	return session.run();
}
*/
