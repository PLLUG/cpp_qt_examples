#ifndef MENUITERATOR_H
#define MENUITERATOR_H

#include <QStack>

class Composite;

/*!
 * \brief The MenuIterator class implements depth first iteraotion
 *   over the given menu item composite.
 */
class MenuIterator
{
public:
    MenuIterator(Composite *container);

    bool hasNext() const;
    Composite *next();

private:
    void addChildrenForTraversal(Composite *container);

private:
    QStack<Composite *> mItemsStack;
};

#endif // MENUITERATOR_H
