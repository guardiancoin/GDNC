// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The DASH developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2018 The GUARDIAN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_ECCRYPTOVERIFY_H
#define BITCOIN_ECCRYPTOVERIFY_H

#include <cstdlib>
#include <vector>

class uint256;

namespace eccrypto
{
bool Check(const unsigned char* vch);
bool CheckSignatureElement(const unsigned char* vch, int len, bool half);

} // eccrypto namespace

#endif // BITCOIN_ECCRYPTOVERIFY_H
