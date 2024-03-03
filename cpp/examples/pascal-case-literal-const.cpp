// Should trigger the rule
const int varName = 1;
constexpr char var_name = "1";
const std::string VAR_NAME= "1";

// Should not trigger the rule
constexpr char VarNameChar = "1";
const std::string VarNameString= "1";
const std::string runTimeVar = getRandomString();
