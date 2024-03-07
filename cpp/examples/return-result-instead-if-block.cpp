bool function1(int a, int b) {
 // ruleid: return-result-instead-if-block
 if (a == b) {
    return true;
  } else {
    return false;
  }
}

// ok: return-result-instead-if-block
bool function2(int a, int b) {
  return a == b;
}

bool function3(int a, int b) {
// ruleid: return-result-instead-if-block
    if (function1(a,b)) {
        return true;
    } else {
        return false;
    }
}

bool function4(int a, int b) {
// ruleid: return-result-instead-if-block
    if (function1(a,b) && function2(a,b)) {
        return true;
    } else {
        return false;
    }
}

bool function5(int a) {
    // ruleid: return-result-instead-if-block
    return a == 1 ? true : false;
}

bool function6(int a) {
    // ruleid: return-result-instead-if-block
    return a == 1 ? false : true;
}

bool function7(int a) {
    // ruleid: return-result-instead-if-block
    bool var = a == 1 ? false : true;
    return var;
}