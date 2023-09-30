#include <iostream>
#include <string>
using namespace std;
int main()
{
    string code;
    bool notBlockOfCode = true;
    while (getline(cin, code))
    {
        bool cleanCode = false;
        if (code.size() == 0 || code == " ")
        {
            continue;
        }
        for (size_t i = 0; i < code.length(); i++)
        {
            // check for single line comments
            if (code[i] == '/' && code[i + 1] == '/' && notBlockOfCode)
            {
                break;
            }
            // check for start block comment
            else if (code[i] == '/' && code[i + 1] == '*')
            {
                i++;
                notBlockOfCode = false;
            }
            // check for end block comment
           else if (code[i] == '*' && code[i + 1] == '/' && !notBlockOfCode)
            {
               i++;
               notBlockOfCode = true;
            }
            else if (notBlockOfCode){
                cout<<code[i];
                cleanCode = true;
            }
        }
        if (notBlockOfCode && cleanCode) 
        {
            cout<<endl;
        }
        
    }
}
// #include <string>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string code;
//     bool blockcomment = false;
//     while (getline(cin, code))
//     {
//         string cleanCode;
//         for (size_t i = 0; i < code.length(); i++)
//         {
//             size_t singleComment = code.find("//",i);
//             size_t startcomment = code.find("/*",i);
//             size_t endcomment = code.find("*/" , i); /* comment */
//             if (blockcomment)
//             {
//                 if (endcomment != string::npos)
//                 {
//                     i = endcomment + 1;
//                     blockcomment = false;
//                 }
//                 else
//                 {
//                     break; // Inside a block comment without an end, skip the line
//                 }
//             }
//             else
//             {
//                 // check for multie lines of comments
//                 if (startcomment != string::npos)
//                 {
//                     size_t endMultiline = code.find("*/", startcomment);
//                     if (endMultiline != string::npos)
//                     {
//                         code.erase(startcomment, endMultiline - startcomment + 2);
//                     }
//                     else
//                     {
//                         // Start of a multi-line comment without an end, so erase the line
//                         code.erase(startcomment);
//                         blockcomment = true;
//                         break;
//                     }
//                 }
//                 else
//                 {
//                     // check for single line comments
//                     if (singleComment != string::npos)
//                     {
//                         code.erase(singleComment);
//                     }
//                 }
//                 if (!code.empty())
//                 {
//                     cleanCode.push_back(code[i]);
//                 }
//             }
//         }
//         if (!cleanCode.empty())
//         {
//             cout << cleanCode << endl;
//         }
//         cleanCode.clear();
//     }
// }
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string line;
//     bool blockOfCode = false;

//     while (getline(cin, line))
//     {
//         size_t pos1 = line.find("//");
//         size_t pos2 = line.find("/*");
//         size_t pos3 = line.find("*/");

//         if (blockOfCode)
//         {
//             // Check for the end of a multi-line comment "*/"
//             if (pos3 != string::npos)
//             {
//                 line.erase(0, pos3 + 2); // Erase the comment and continue processing
//                 blockOfCode = false;
//             }
//             else
//             {
//                 line.erase(); // Erase the entire line since we are inside a comment block
//             }
//         }
//         else
//         {
//             // Check for the beginning of a multi-line comment "/*"
//             if (pos2 != string::npos)
//             {
//                 size_t endPos = line.find("*/", pos2);
//                 if (endPos != string::npos)
//                 {
//                     // Erase the entire multi-line comment and continue processing . ex :/* This is a
//                     // multi-line comment */
//                     line.erase(pos2, endPos - pos2 + 2);
//                 }
//                 else
//                 {
//                     // Start of a multi-line comment without an end, so erase the line
//                     line.erase(pos2);
//                     blockOfCode = true;
//                 }
//             }
//             else
//             {
//                 // Check for a single-line comment "//"
//                 if (pos1 != string::npos)
//                 {
//                     line.erase(pos1);
//                 }
//             }
//             if (line.empty())
//             {
//                 cout << line << endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main()
// {
//     string line;
//     while (getline(cin, line))
//     {
//         bool blockOfCode = false;
//         for (size_t i = 0; i < line.length(); i++)
//         {
//             size_t pos1 = line.find("//");
//             //size_t pos4 = line.find("\\n");
//             if (pos1 != string::npos)
//             {
//                 line.erase(pos1);
//             }
//             size_t pos2 = line.find("/*");
//             size_t pos3 = line.find("*/");
//             if (pos2 != string::npos)
//             {
//                 line.erase(pos2);
//                 blockOfCode = true;
//             }
//             if (blockOfCode)
//             {
//                 line.erase(0, line.length());
//                 if (pos3 != string::npos)
//                 {
//                     line.erase(pos3);
//                     blockOfCode = false;
//                 }
//             }

//             // while (pos2 != string::npos)
//             // {
//             //     size_t pos3 = line.find("*/", pos2);
//             //     if (pos3 != string::npos)
//             //     {
//             //         line.erase(pos2, pos3 - pos2 + 2);
//             //     }
//             //     pos2 = line.find("/*", pos2 + 1);
//             // }

//             // if (pos2 != string::npos)
//             // {
//             //     blockOfCode = true;
//             //     line.erase(pos2);
//             //     cout << line << endl;
//             // }
//             // else if (pos3 != string::npos){
//             //     line.erase(0,pos3+2);
//             //     blockOfCode = false;
//             // }

//             // if (!blockOfCode)
//             // {
//             //
//             //     break;
//             // }
//         }
//         cout << line << endl;
//     }
// }

// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main()
// {
//     string line;
//     while (getline(cin, line))
//     {
//         size_t pos1 = line.find("//");
//         size_t pos2 = line.find("\\n");
//         size_t pos3 = line.find("/*");
//         size_t pos4 = line.find("*/");
//         bool blockOfComment = false;
//         for (size_t i = 0; i < line.length(); i++)
//         {
//             if (blockOfComment)
//             {
//                 line.erase(line.length());
//                 if (pos4 != string ::npos)
//                 {
//                     line.erase(line.length());
//                     // blockOfComment = false;
//                 }
//             }

//             else if (pos1 != string::npos)
//             {
//                 line.erase(pos1, line.length() - pos1);
//                 blockOfComment = false;
//             }
//             else if (pos3 != string::npos)
//             {
//                 blockOfComment = true;
//                 line.erase(pos3, line.length() - pos3);
//             }

//             cout << line << endl;
//         }
//     }

// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;
// int main()
// {
//     string line;
//     while (getline(cin, line))
//     {
//         size_t pos1 = line.find("//");
//         size_t pos3 = line.find("/*");
//         size_t pos4 = line.find("*/");
//         bool blockOfComment = false;
//         for (size_t i = 0; i < line.length(); i++)
//         {
//             if (blockOfComment)
//             {

//                 if (pos4 != string ::npos)
//                 {
//                     blockOfComment = false;
//                     line.erase(0, pos4 + 2);
//                 }
//                 else
//                 {
//                     continue;
//                 }
//             }

//             if (pos1 != string::npos)
//             {
//                 line.erase(pos1, line.length() - pos1);
//                 blockOfComment = false;
//             }
//             else if (pos3 != string::npos)
//             {
//                 blockOfComment = true;
//                 line.erase(pos3, line.length() - pos3);
//             }
//         }
//         cout << line << endl;
//     }
// }

// blockOfComment = false;

// while (blockOfComment == true)
// {

//     if (line[i] != '*' && i+1 <line.length()-1 && line[i + 1] != '/')
//     {
//         line.erase(line.length());
//     }
//     else
//     {
//         line.erase(line.length());
//         blockOfComment = false;
//         break ;
//     }

//     // if (pos4 != string::npos)
//     // {
//     //     line.erase(pos4, line.length() - pos4);
//     //     blockOfComment=false;
//     //     break;
//     // }
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string line;
//     bool inBlockComment = false;

//     while (getline(cin, line))
//     {
//         size_t pos1 = line.find("//");
//         size_t pos2 = line.find("\\n");
//         size_t pos3 = line.find("/*");
//         //size_t pos4 = line.find("*/");

//         if (inBlockComment)
//         {
//             size_t blockCommentEnd = line.find("*/");
//             if (blockCommentEnd != string::npos)
//             {
//                 inBlockComment = false;
//                 line.erase(0, blockCommentEnd + 2);
//             }
//             else
//             {
//                 continue; // Skip this line inside a block comment
//             }
//         }

//         while (pos1 != string::npos || pos3 != string::npos)
//         {
//             if (pos1 != string::npos && (pos3 == string::npos || pos1 < pos3))
//             {
//                 line.erase(pos1); // Remove single-line comment
//                 pos1 = line.find("//");
//             }
//             else
//             {
//                 size_t blockCommentStart = line.find("/*");
//                 if (blockCommentStart != string::npos)
//                 {
//                     size_t blockCommentEnd = line.find("*/", blockCommentStart);
//                     if (blockCommentEnd != string::npos)
//                     {
//                         line.erase(blockCommentStart, blockCommentEnd - blockCommentStart + 2);
//                     }
//                     else
//                     {
//                         inBlockComment = true;
//                         line.erase(blockCommentStart);
//                         break; // Exit the loop to continue processing in the next iteration
//                     }
//                 }
//             }
//         }

//         cout << line << endl;
//     }

//     return 0;
// }

//
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string line;
//     bool inBlockComment = false;

//     while (getline(cin, line))
//     {
//         string cleanedLine;
//         for (size_t i = 0; i < line.length(); i++)
//         {
//             if (inBlockComment)
//             {
//                 // Check for the end of a block comment
//                 size_t pos = line.find("*/", i);
//                 if (pos != string::npos)
//                 {
//                     inBlockComment = false;
//                     i = pos + 1; // Skip to the end of the block comment
//                 }
//             }
//             else
//             {
//                 // Check for the start of a block comment
//                 size_t pos = line.find("/*", i);
//                 if (pos != string::npos)
//                 {
//                     inBlockComment = true;
//                     i = pos + 1; // Skip to the end of the block comment start
//                 }
//                 else
//                 {
//                     // Check for the start of a single-line comment
//                     if (line[i] == '/' && i + 1 < line.length() && (line[i + 1] == '/' || line[i + 1] == '*'))
//                     {
//                         break; // Ignore the rest of the line
//                     }
//                     else if (!isspace(line[i]))
//                     {
//                         cleanedLine += line[i];
//                     }
//                 }
//             }
//         }

//         // Output the cleaned line if it's not empty
//         if (!cleanedLine.empty())
//         {
//             cout << cleanedLine << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     bool inside_block_comment = false;
//     string line;

//     while (getline(cin, line)) {
//         // Trim leading and trailing spaces
//         line.erase(0, line.find_first_not_of(" \t"));
//         line.erase(line.find_last_not_of(" \t") + 1);

//         if (line.empty()) {
//             continue; // Skip blank lines
//         }

//         if (inside_block_comment) {
//             // Check if this line contains the end of a block comment
//             size_t end_comment_pos = line.find("*/");
//             if (end_comment_pos != string::npos) {
//                 inside_block_comment = false;
//                 line = line.substr(end_comment_pos + 2); // Remove the part after '*/'
//             }
//         } else {
//             // Check for single-line comments and remove them
//             size_t single_comment_pos = line.find("//");
//             if (single_comment_pos != string::npos) {
//                 line = line.substr(0, single_comment_pos); // Remove the part after '//'
//             }

//             // Check for block comments and remove them
//             size_t start_comment_pos = line.find("/*");
//             if (start_comment_pos != string::npos) {
//                 size_t end_comment_pos = line.find("*/", start_comment_pos);
//                 if (end_comment_pos != string::npos) {
//                     line = line.substr(0, start_comment_pos) + line.substr(end_comment_pos + 2);
//                 } else {
//                     inside_block_comment = true;
//                     line = line.substr(0, start_comment_pos); // Remove the part before '/*'
//                 }
//             }
//         }

//         // Print the cleaned line
//         if (!line.empty()) {
//             cout << line << endl;
//         }
//     }

//     return 0;
// }

// /*#include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string line;
//     while(getline(cin, line)){
//         for (size_t i = 0; i < line.length(); i++)
//         {
//             size_t poscom = line.find('/');
//             if (poscom != string::npos)
//             {

//             }

//         }

//     }

// }*/

// /*#include <string>
// #include <iostream>
// #include <sstream>
// using namespace std;
// int main()
// {
//     string code, cleanCode;
//     while (getline(cin, code))
//     {
//         bool single = 0;
//         bool multi = 0;
//         bool clean=0;
//         for (size_t i = 0; i < code.length(); i++)
//         {
//             // check for single line comments
//             if (code[i] == '/' && code[i + 1] == '/')
//             {
//                 single = 1;
//             }
//             else if (code[i] == '/' && code[i + 1] =='*'){
//                 size_t pos = code.find("*/ /*");
//                 if (pos != string::npos)
//                 {
//                     multi = 1;
//                 }

//             }
//             if (!multi || !single)
//             {
//                 cout<<code[i];
//                 clean = 1;
//             }
//         }
//         if (clean)
//         {
//            cout<<endl;
//         }

//     }
// }*/
// /* for (size_t i = 0; i < code.length(); i++)
//     {
//         //size_t pos = code.find('/');
//         size_t end = code.find('#');
//         if (end != string::npos)
//         {
//          cleanCode = code.substr(end);
//         }

//     }*/
// /* size_t pos = code.find('/');
//     // size_t end = code.find('#');
//     if (pos != string::npos)
//     {
//         cleanCode += code.substr(0, pos) + '\n';
//     }
//     else
//     {
//         cleanCode += code + '\n';
//     }
//     cout << cleanCode << endl;*/