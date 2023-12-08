#include "Skew.h"
#include "SAIS.h"
#include "Naive.h"

int main(int argc, char* argv[])
{
    //OLD
    /*std::string testString1("cabbage");
    std::string testString2("baggage");
    std::cout << "Test String: " << testString1 << std::endl;

    Skew s;
    std::cout << typeid(s).name() << std::endl;
    s.addString(testString1);
    s.makeSuffixArray();
    s.printSuffixArray();
    std::cout << std::endl;

    SAIS s2;
    std::cout << typeid(s2).name() << std::endl;
    s2.addString(testString1);
    s2.makeSuffixArray();
    s2.printSuffixArray();
    std::cout << std::endl;

    Naive s3;
    std::cout << typeid(s3).name() << std::endl;
    s3.addString(testString1);
    s3.makeSuffixArray();
    s3.printSuffixArray();
    std::cout << std::endl;

    Skew testLCS;
    std::cout << "LCS for: " << testString1 << " " << testString2 << std::endl;
    std::cout << typeid(testLCS).name() << std::endl;
    testLCS.addString(testString1);
    testLCS.addString(testString2);
    testLCS.makeSuffixArray();
    testLCS.printSuffixArray();
    testLCS.findLongestCommonStrand(2);*/

	//TEST SKEW (KS)
	std::cout << argv[1] << std::endl;
	Skew s;
	std::cout << typeid(s).name() << std::endl;
	s.addStringFromFile(argv[1]);
	s.makeSuffixArray();
	s.printSuffixArray();
    	std::cout << std::endl;

	SAIS s2;
	std::cout << typeid(s2).name() << std::endl;
        s2.addStringFromFile(argv[1]);
        s2.makeSuffixArray();
        s2.printSuffixArray();
        std::cout << std::endl;
}
