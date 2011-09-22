/*
 * Xournal++
 *
 * Toolbar drag & drop controller
 *
 * @author Xournal Team
 * http://xournal.sf.net
 *
 * @license GPL
 */

#ifndef __TOOLBARDRAGDROPHANDLER_H__
#define __TOOLBARDRAGDROPHANDLER_H__

#include <XournalType.h>
#include "ToolbarAdapter.h"
#include "ToolbarListener.h"

class Control;
class ToolbarAdapter;
class ToolbarCustomizeDialog;

class ToolbarDragDropHandler : public ToolbarListener {
public:
	ToolbarDragDropHandler();
	virtual ~ToolbarDragDropHandler();

public:
	void configure(Control * control);

	virtual void toolbarDataChanged();

protected:
	void prepareToolbarsForDragAndDrop(Control * control);
	void clearToolbarsFromDragAndDrop();

private:
	XOJ_TYPE_ATTRIB;

	ToolbarAdapter ** toolbars;
	ToolbarCustomizeDialog * customizeDialog;
};

#endif /* __TOOLBARDRAGDROPHANDLER_H__ */