#pragma once

#include "RecordHash.h"

class CSimpleBlockChainRecord
{
	void *m_pData;
	size_t m_nDataSize;
	CRecordHash prevBlockHash, currentBlockHash;

public:
	CSimpleBlockChainRecord();
	virtual ~CSimpleBlockChainRecord();
};