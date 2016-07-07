//===-- project_euler/Problem2.cpp ------------------------------*- C++ -*-===//
//
// ProjectEuler.net solutions by Will Mitchell
//
// This file is distributed under the MIT License. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
///
/// \class project_euler::Problem2
/// \brief Even Fibonacci numbers
///
/// Question
/// --------
/// Each new term in the Fibonacci sequence is generated by adding the previous
/// two terms. By starting with 1 and 2, the first 10 terms will be:
///
/// > 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
///
/// By considering the terms in the Fibonacci sequence whose values do not
///  exceed four million, find the sum of the even-valued terms.
///
/// Brute Force
/// -----------
/// Calculate each Fibonacci number and just sum them up.
///
/// Speeding it up
/// --------------
/// Note that every third Fibonacci number is even because we start with odd
/// numbers and require two consecutive odds to make the next number even.
///
/// By definition, the standard Fibonacci numbers are defined as:
/// \f[
///    F_{n} = F_{n-1} + F_{n-2}
/// \f]
/// Thus we want \f$F_{n+3}\f$ in terms of things we can easily calculate.
/// \f{eqnarray*}{
///   F_{n+3} &=& F_{n+2} + F_{n+1}\\
///   &=& F_{n+1} + F_{n} + F_{n} + F_{n-1}\\
///   &=& F_{n} + F_{n-1} + F_{n} + F_{n} + F_{n-1}\\
///   &=& 3 F_{n} + 2 F_{n-1}
/// \f}
/// This allows us to go from \f$n\f$ to \f$n+3\f$, but we still need
/// \f$F_{n-1}\f$ and hence \f$F_{n+2}\f$.
/// \f{eqnarray*}{
///   F_{n+2} &=& F_{n+1} + F_{n}\\
///   &=& F_{n} + F_{n-1} + F_{n}\\
///   &=& 2 F_{n} + F_{n-1}
/// \f}
/// Now we can skip straight to the even Fibonacci numbers and don't need to
/// check for even-ness, assuming correct starting values. In particular we
/// use \f$F_{n}\f$ and \f$F_{n-1}\f$ to compute \f$F_{n+3}\f$ and \f$F_{n+2}\f$
/// until we reach out limit, summing up the \f$F_{n+3}\f$ along the way.
//===----------------------------------------------------------------------===//
#include "Problem2.h"

#include <sstream>
using std::stringstream;
#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

string project_euler::Problem2::answer() {
  if (!solved)
    solve();

  stringstream ss;

  ss << "The sum of all even valued Fibonacci numbers below 4 million is "
     << sum;

  return ss.str();
}

std::string project_euler::Problem2::description() const {
  return "Problem 2: Even Fibonacci numbers";
}

void project_euler::Problem2::solve() {
  sum = evens_only(4000000);
  solved = true;
}

// Goes through Fibonacci numbers one by one and adds only if even
unsigned int project_euler::Problem2::brute_force(const unsigned int limit) const {
  unsigned int nm2 = 1; // n - 2
  unsigned int nm1 = 1; // n - 1
  unsigned int n = 2;   // n
  unsigned int s = 0;

  while (n < limit) {
    if (n % 2 == 0)
      s += n;

    nm2 = nm1;
    nm1 = n;
    n = nm1 + nm2;
  }

  return s;
}

// Goes through only the even Fibonacci numbers
unsigned int project_euler::Problem2::evens_only(const unsigned int limit) const {
  unsigned int s = 0;
  unsigned int np3 = 2; // n + 3
  unsigned int np2 = 1; // n + 2
  unsigned int n = 0;   // n
  unsigned int nm1 = 0; // n - 1

  while (np3 < limit) {
    s += np3;

    n = np3;
    nm1 = np2;
    np2 = 2 * n + nm1;
    np3 = 3 * n + 2 * nm1;
  }

  return s;
}
