//===-- problems/Problem8.h -------------------------------------*- C++ -*-===//
//
// ProjectEuler.net solutions by Will Mitchell
//
// This file is distributed under the MIT License. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief Problem 8: Largest product in a series
///
//===----------------------------------------------------------------------===//
#ifndef PROBLEMS_PROBLEM8_H
#define PROBLEMS_PROBLEM8_H

#include <string>

#include "../Problem.h"

namespace problems {
class Problem8 : public Problem {
public:
  Problem8() : product(0), solved(false) {}
  ~Problem8() = default;
  std::string answer();
  std::string description() const;
  void solve();

private:
  /// Cached answer
  int product;
  /// If cached answer is valid
  bool solved;
};
}

#endif
