//
// Created by alex on 19/02/17.
//

#include "args.hxx"
#include "iostream"
#include "fib.h"
#include "dateLib.h"

using namespace args;

int main(int argc, char **argv) {
    ArgumentParser parser("This is a demo program.");
    HelpFlag help(parser, "help", "Display this help menu", {'h', "help"});
    Flag dateFlag(parser, "dateFlag", "Print the current date.", {'d', "date"});
    ValueFlag<int> fibonacciFlag(parser, "fibonacciFlag", "Find the fibonacci sequence for this number.", {'f', "Fibonaci"});


    try {
        parser.ParseCLI(argc, argv);
    } catch (Help) {
        std::cout << parser;
        return 0;
    } catch (ParseError e) {
        std::cerr << e.what() << std::endl;
        std::cerr << parser;
        return 1;
    } catch (ValidationError e) {
        std::cerr << e.what() << std::endl;
        std::cerr << parser;
        return 1;
    }

    if (dateFlag) {
        std::cout << date::getDateStr() << std::endl;
    }
    else if (fibonacciFlag) {
        std::cout << fibonacci::fibonacci(get(fibonacciFlag));
    }
}