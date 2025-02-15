/*
 * RowsContainer.h
 *
 *  Created on: Dec 15, 2019
 *      Author: LavishK1
 */

#ifndef APP_SUDOKUCONTAINER_WRAPERCONTAINER_ROWSCONTAINER_H_
#define APP_SUDOKUCONTAINER_WRAPERCONTAINER_ROWSCONTAINER_H_

#include "TableContainer.h"

namespace Veronix
{
namespace App
{
namespace sudosolver
{
namespace container
{

class RowsContainer : public TableContainer
{
private:
	explicit RowsContainer();
	virtual ~RowsContainer();

	int getLineId(int, int);
	int getCellId(int, int);
	friend class GridContainer;
};

} /* namespace container */
} /* namespace sudosolver */
} /* namespace App */
} /* namespace Veronix */

#endif /* APP_SUDOKUCONTAINER_WRAPERCONTAINER_ROWSCONTAINER_H_ */
