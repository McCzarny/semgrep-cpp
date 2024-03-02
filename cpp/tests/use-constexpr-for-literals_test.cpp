// Test cases for use-constexpr-for-literals rule

// Should trigger the rule
const int a = 10;

// Should trigger the rule
const float b = 3.14;

// Should trigger the rule
const char c = 'A';

// Should not trigger the rule
const int d = someFunction();

// Should not trigger the rule
constexpr int e = 20;

// Should not trigger the rule
constexpr float f = 2.718;

// Should not trigger the rule
constexpr char g = 'B';

// Global scope - Should trigger the rule
const int globalInt = 100;

// Within a function - Should trigger the rule
void testFunction() {
    const int localInt = 200;
}

// Within a class - Should trigger the rule
class TestClass {
public:
    const int memberInt = 300;
};

// Should not trigger the rule because the value is not a literal
int someFunction() {
    return 42;
}
