// Should trigger the rule
bool function1(int a, int b) {
  if (a == b) {
    return true;
  } else {
    return false;
  }
}

// Should not trigger the rule
bool function2(int a, int b) {
  return a == b;
}

// Should trigger the rule
bool function3(int a, int b) {
    if (function1(a,b)) {
        return true;
    } else {
        return false;
    }
}

// Should trigger the rule
bool function4(int a, int b) {
    if (function1(a,b) && function2(a,b)) {
        return true;
    } else {
        return false;
    }
}