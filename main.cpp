
 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */


/*
 1)
 */
struct Student
{
    float gpa = 4.0f;
    float age = 14.5f;
    int currentSemester = 2;
    int daysSkipped = 1;
    int daysSick = 3;

    void graduate(bool pass);
    
    struct Backpack
    {
        bool hasHistoryBook = false;
        bool hasMathBook = true;
        bool hasScienceBook = true;

        void exchangeBooksInLocker(int periodNum);
		void eatLunch();
    };
};
/*
 2)
 */

/*
 3)
 */

/*
 4)
 */

/*
 5)
 */

/*
 6)
 */

/*
 7)
 */

/*
 8)
 */

/*
 9)
 */

/*
 10)
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
