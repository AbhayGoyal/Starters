#include <iostream.h>
#include <stack.h>
#include <string.h>

struct Bracket {
    Bracket(char type, int position):
	type(type),
	position(position)
    {}

    bool Matchc(char c) {
	if (type == '[' && c == ']')
	    return true;
	if (type == '{' && c == '}')
	    return true;
	if (type == '(' && c == ')')
	    return true;
	return false;
    }

    char type;
    int position;
};

int main() {
    std::string text;
    getline(std::cin, text);

    std::stack <Bracket> opening_brackets_stack;
    for (int position = 0; position < text.length(); ++position) {
	char next = text[position];

	if (next == '(' || next == '[' || next == '{') {
	    opening_brackets_stack.push(next);
	    // Process opening bracket, write your code here
	}

	if (next == ')' || next == ']' || next == '}') {
	    char ch=opening_brackets_stack.pop();
	      if(opening_brackets_stack.pop==-1)
	      {
		 printf("NO opening brackets");
	      }
	      else
	      {
		 if(ch==next)
		 continue;
		 else
		 break;
	      }
	    // Process closing bracket, write your code here
	}
    }

    // Printing answer, write your code here
    printf("Not balanced");
    return 0;
}
