/****************************************************************************
** Meta object code from reading C++ file 'calc.h'
**
** Created: Thu Mar 13 11:42:40 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "calc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Calc[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x0a,
      14,    5,    5,    5, 0x0a,
      27,    5,    5,    5, 0x0a,
      40,    5,    5,    5, 0x0a,
      51,    5,    5,    5, 0x0a,
      62,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Calc[] = {
    "Calc\0\0doAdd()\0doMultiply()\0doSubtract()\0"
    "doDivide()\0doModulo()\0doClear()\0"
};

void Calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Calc *_t = static_cast<Calc *>(_o);
        switch (_id) {
        case 0: _t->doAdd(); break;
        case 1: _t->doMultiply(); break;
        case 2: _t->doSubtract(); break;
        case 3: _t->doDivide(); break;
        case 4: _t->doModulo(); break;
        case 5: _t->doClear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Calc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Calc::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Calc,
      qt_meta_data_Calc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Calc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Calc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Calc))
        return static_cast<void*>(const_cast< Calc*>(this));
    return QWidget::qt_metacast(_clname);
}

int Calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
