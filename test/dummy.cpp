//////////////////////////////////////////////////////////////////////////////
//
// (C) Copyright Ion Gaztanaga 2026. Distributed under the Boost
// Software License, Version 1.0. (See accompanying file
// LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
//////////////////////////////////////////////////////////////////////////////

// This test includes most of the standard headers (and windows.h on Windows),
// so that an incompatible combination of compiler, standard library and
// platform SDK fails here. Example: the ucrt\wchar.h of Windows SDK 10.0.26100
// calls _mm_loadu_si64, which the MSVC 14.0 compiler does not declare.

#if defined(_MSVC_LANG) && (_MSVC_LANG > __cplusplus)
#  define IG_GHA_CXX _MSVC_LANG
#else
#  define IG_GHA_CXX __cplusplus
#endif

#if defined(__has_include)
#  define IG_GHA_HAS_INCLUDE(X) __has_include(X)
#else
#  define IG_GHA_HAS_INCLUDE(X) 0
#endif

// C library headers
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

// C++98 headers
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

// C++11 headers
#if IG_GHA_CXX >= 201103L
#  include <array>
#  include <atomic>
#  include <cfenv>
#  include <chrono>
#  include <cinttypes>
#  include <condition_variable>
#  include <cstdint>
#  include <forward_list>
#  include <future>
#  include <initializer_list>
#  include <mutex>
#  include <random>
#  include <ratio>
#  include <regex>
#  include <scoped_allocator>
#  include <system_error>
#  include <thread>
#  include <tuple>
#  include <type_traits>
#  include <typeindex>
#  include <unordered_map>
#  include <unordered_set>
#endif

// C++14 headers
#if IG_GHA_CXX >= 201402L
#  include <shared_mutex>
#endif

// C++17 headers. Some compilers declare C++17 support before the standard
// library has the header, so only existing headers are included
#if IG_GHA_CXX >= 201703L
#  if IG_GHA_HAS_INCLUDE(<any>)
#     include <any>
#  endif
#  if IG_GHA_HAS_INCLUDE(<charconv>)
#     include <charconv>
#  endif
#  if IG_GHA_HAS_INCLUDE(<filesystem>)
#     include <filesystem>
#  endif
#  if IG_GHA_HAS_INCLUDE(<memory_resource>)
#     include <memory_resource>
#  endif
#  if IG_GHA_HAS_INCLUDE(<optional>)
#     include <optional>
#  endif
#  if IG_GHA_HAS_INCLUDE(<string_view>)
#     include <string_view>
#  endif
#  if IG_GHA_HAS_INCLUDE(<variant>)
#     include <variant>
#  endif
#endif

// C++20 headers. A header is included only if the standard library defines
// its feature-test macro, as some libraries supply incomplete headers.
// <coroutine>, <format> and <ranges> are not included: some old Clang
// versions cannot compile these headers of newer libstdc++ versions
#if IG_GHA_CXX >= 202002L && IG_GHA_HAS_INCLUDE(<version>)
#  include <version>
#  if defined(__cpp_lib_three_way_comparison)
#     include <compare>
#  endif
#  if defined(__cpp_lib_bitops)
#     include <bit>
#  endif
#  if defined(__cpp_lib_concepts)
#     include <concepts>
#  endif
#  if defined(__cpp_lib_math_constants)
#     include <numbers>
#  endif
#  if defined(__cpp_lib_span)
#     include <span>
#  endif
#  if defined(__cpp_lib_source_location)
#     include <source_location>
#  endif
#  if defined(__cpp_lib_jthread)
#     include <stop_token>
#  endif
#  if defined(__cpp_lib_barrier)
#     include <barrier>
#  endif
#  if defined(__cpp_lib_latch)
#     include <latch>
#  endif
#  if defined(__cpp_lib_semaphore)
#     include <semaphore>
#  endif
#endif

// Platform SDK headers
#if defined(_WIN32) && !defined(__CYGWIN__)
#  ifndef NOMINMAX
#     define NOMINMAX
#  endif
#  include <windows.h>
#endif

int main()
{
   return 0;
}
