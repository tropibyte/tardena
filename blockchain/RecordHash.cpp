#include "pch.h"
#include <malloc.h>
#include "RecordHash.h"


CRecordHash::CRecordHash() : m_pbHash(nullptr)
{
	CreateNullHash();
}

CRecordHash::~CRecordHash()
{
	if (m_pbHash)
	{
		HeapFree(GetProcessHeap(), 0, m_pbHash);
	}
}

void CRecordHash::CreateNullHash()
{
	m_pbHash = (PBYTE)HeapAlloc(GetProcessHeap(), 0, sizeof(INT64));
	memset(m_pbHash, 0, m_nHashLength);
}

