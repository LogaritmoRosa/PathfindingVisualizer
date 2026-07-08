#pragma once

#include <vector>

enum class CellState
{
	Empty,
	Wall,
	Start,
	End
};

class Grid
{
public:
	Grid() : m_rows(0), m_columns(0), m_grid(0) {};
	Grid(int rows, int columns);

	int getRows() const { return m_rows; }
	int getColumns() const { return m_columns; }
	CellState getCellState(int row, int col) const;
private:
	int m_rows;
	int m_columns;
	std::vector<std::vector<CellState>> m_grid;
};