#pragma once

#include "SimpleBlockChainRecord.h"
#include <list>


class CSimpleBlockChain
{
	std::list<CSimpleBlockChainRecord> m_listBlockChainRecords;

public:
	CSimpleBlockChain();
	virtual ~CSimpleBlockChain();
};

