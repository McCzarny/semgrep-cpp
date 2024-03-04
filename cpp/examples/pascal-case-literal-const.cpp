#include <string>

std::string getRandomString();

// ruleid: pascal-case-literal-const
const int varName = 1;
// ruleid: pascal-case-literal-const
constexpr char* var_name = "1";
// ruleid: pascal-case-literal-const
const std::string VAR_NAME= "1";

// ok: pascal-case-literal-const
constexpr char* VarNameChar = "1";
// ok: pascal-case-literal-const
const std::string VarNameString= "1";
// ok: pascal-case-literal-const
const std::string runTimeVar = getRandomString();
