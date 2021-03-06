/*
    Mosh: the mobile shell
    Copyright 2012 Keith Winstein

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    In addition, as a special exception, the copyright holders give
    permission to link the code of portions of this program with the
    OpenSSL library under certain conditions as described in each
    individual source file, and distribute linked combinations including
    the two.

    You must obey the GNU General Public License in all respects for all
    of the code used other than OpenSSL. If you modify file(s) with this
    exception, you may extend this exception to your version of the
    file(s), but you are not obligated to do so. If you do not wish to do
    so, delete this exception statement from your version. If you delete
    this exception statement from all source files in the program, then
    also delete it here.
*/

#ifndef PRNG_HPP
#define PRNG_HPP

#include <string>
#include <stdint.h>
#include <fstream>

#include "crypto.h"

#include <random>

/* Read random bytes from /dev/urandom.

   We rely on stdio buffering for efficiency. */

static const char rdev[] = "/dev/urandom";

using namespace Crypto;

class PRNG {
 private:
  //std::ifstream randfile;
    std::mt19937 rng;

  /* unimplemented to satisfy -Weffc++ */
  PRNG( const PRNG & );
  PRNG & operator=( const PRNG & );

 public:
  PRNG() /*: randfile( rdev, std::ifstream::in | std::ifstream::binary )*/ {}

  void fill( void *dest, size_t size ) {
    if ( 0 == size ) {
      return;
    }

    std::uniform_int_distribution<int> dist(0, UINT8_MAX);
    for (size_t i = 0; i < size; ++i) {
        ((char*)dest)[i] = dist(rng);
    }

    //randfile.read( static_cast<char *>( dest ), size );
    //if ( !randfile ) {
    //  throw CryptoException( "Could not read from " + std::string( rdev ) );
    //}
  }

  uint8_t uint8() {
    uint8_t x;
    fill( &x, 1 );
    return x;
  }

  uint32_t uint32() {
    uint32_t x;
    fill( &x, 4 );
    return x;
  }

  uint64_t uint64() {
    uint64_t x;
    fill( &x, 8 );
    return x;
  }
};

#endif
