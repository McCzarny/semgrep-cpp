// Test cases for use-constexpr-for-literals rule

// ruleid: use-constexpr-for-literals
const int a = 10;

// ruleid: use-constexpr-for-literals
const float b = 3.14;

// ruleid: use-constexpr-for-literals
const char c = 'A';

// ruleid: use-constexpr-for-literals
const char* c = "A";

// ok: use-constexpr-for-literals
const int d = someFunction();

// ok: use-constexpr-for-literals
constexpr int e = 20;

// ok: use-constexpr-for-literals
constexpr float f = 2.718;

// ok: use-constexpr-for-literals
constexpr char g = 'B';

// ok: use-constexpr-for-literals
const std::string stringValue = "stringValue";

void testFunction() {
// ruleid: use-constexpr-for-literals
    const int localInt = 200;
}

class TestClass {
public:
// ruleid: use-constexpr-for-literals
    const int memberInt = 300;
};

// ok: use-constexpr-for-literals
int someFunction() {
    return 42;
}
