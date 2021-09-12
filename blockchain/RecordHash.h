#pragma once
class CRecordHash
{
	PBYTE m_pbHash;
	size_t m_nHashLength;

public:
	CRecordHash();
	virtual ~CRecordHash();
	void CreateNullHash();
};

