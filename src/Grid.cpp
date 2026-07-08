#include "Grid.hpp"

Grid::Grid(int rows, int columns) : m_rows(rows), m_columns(columns)
{
	m_grid.assign(rows, std::vector<CellState>(columns, CellState::Empty));
}

CellState Grid::getCellState(int row, int col) const
{
	if (row >= 0 && row < m_rows && col >= 0 && col < m_columns)
	{
		return m_grid[row][col];
	}

	return CellState::Empty;
}

