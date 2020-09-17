#include "stdafx.h"
#include "Rank.h"

#define Rank_N 10

CRank::CRank()
	: m_TotalName(NULL)
	, m_TotalRank(NULL)
	, totalRankCnt(0)
{
	m_TotalName = new CString[Rank_N];
	m_TotalRank = new CString[Rank_N];
}


CRank::~CRank()
{
	delete[] m_TotalName;
	delete[] m_TotalRank;
}


CString CRank::GetTotalName(int i)
{
	return m_TotalName[i];
}


CString CRank::GetTotalRank(int i)
{
	return m_TotalRank[i];
}


void CRank::SetTotalRank(CUserID * ID, int IDCnt)
{
	CString *stemp;
	int *itemp;
	int totalCnt = 0;
	int index = 0;
	int tpi;
	CString tps;

	// �� ��� ���� ���ϱ�
	for (int i = 0; i < IDCnt; i++) {
		for (int j = 0; j < ID[i].m_RankCnt; j++) {
			totalCnt++;
		}
	}
	if (totalCnt < Rank_N) { this->totalRankCnt = totalCnt; }
	else { this->totalRankCnt = Rank_N; }
	stemp = new CString[totalCnt];
	itemp = new int[totalCnt];

	// �� ��ŷ �� �ֱ�
	for (int i = 0; i < IDCnt; i++) {
		for (int j = 0; j < ID[i].m_RankCnt; j++) {
			stemp[index] = ID[i].GetUserID();
			itemp[index++] = ID[i].GetUserRank(j);
		}
	}

	// �� ��ŷ ����
	for (int i = 0; i < totalCnt - 1; i++) {
		for (int j = i + 1; j < totalCnt; j++) {
			if (itemp[i] < itemp[j]) {
				tpi = itemp[i];
				itemp[i] = itemp[j];
				itemp[j] = tpi;
				tps = stemp[i];
				stemp[i] = stemp[j];
				stemp[j] = tps;
			}
		}
	}

	// 10�������� �ڸ���
	for (int i = 0; i < this->totalRankCnt; i++) {
		if (itemp[i] == 0) {
			m_TotalRank[i].Format(_T("(�ð��ʰ�)"));
			m_TotalName[i] = stemp[i];
		}
		else {
			m_TotalRank[i].Format(_T("%d"), itemp[i]);
			m_TotalName[i] = stemp[i];
		}
	}

	delete[] stemp;
	delete[] itemp;
}