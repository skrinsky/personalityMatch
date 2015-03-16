#ifndef ANSWER_H
#define ANSWER_H

/* Header file for the Answer class
 * Do NOT modify this file.


 * PARTNER NAMES Summer Krinsky Andrew Goulston

 */

#include <iostream>
#include <string>

#include "Attribute.h"

using std::istream;
using std::ostream;
using std::string;

// The Answer class represents the choose-able answers to EECS Harmony
// questions. Each Answer contains the text of the answer as well as the
// personality Attribute associated with this answer. For example, if a
// question asks, "Who is Cody Bird?", the answer "A big jerk!" would have
// a "Friendliness" attribute of -500 points while "Coolest guy ever!" would
// have a "Friendliness" Attribute of 1000 points.

class Answer {
	// Initialize private data members from the input stream.
    friend istream& operator>> (istream& ins, Answer& ans);
    
    // Print the answer text to the output stream.
    friend ostream& operator<< (ostream& out, const Answer& ans);
    
public:
    // Default constructor initializes private members to default
    // or empty values.
    Answer();
    
    // Accessors
    Attribute getAttribute() const;
    string getText() const;
    
    // Modifiers
    void setAttribute(Attribute inAttribute);
    void setText(string inText);
    
    
private:
    // The personality attribute associated with this answer.
    Attribute attribute;
    
    // The text for this Answer.
    string text;
    
	// Initialize private data members from the input stream
	// in the order: attribute first followed by the text
	//Example:
	//2 2calm
    void read(istream& ins);
    
    // Print the answer text to the output stream.
    void write(ostream& out) const;
    
};


#endif

