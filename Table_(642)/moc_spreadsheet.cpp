/****************************************************************************
** Meta object code from reading C++ file 'spreadsheet.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "spreadsheet.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spreadsheet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_SpreadSheet_t {
    uint offsetsAndSizes[36];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[5];
    char stringdata5[6];
    char stringdata6[4];
    char stringdata7[17];
    char stringdata8[20];
    char stringdata9[12];
    char stringdata10[19];
    char stringdata11[3];
    char stringdata12[9];
    char stringdata13[4];
    char stringdata14[20];
    char stringdata15[3];
    char stringdata16[9];
    char stringdata17[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SpreadSheet_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SpreadSheet_t qt_meta_stringdata_SpreadSheet = {
    {
        QT_MOC_LITERAL(0, 11),  // "SpreadSheet"
        QT_MOC_LITERAL(12, 8),  // "modified"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 3),  // "cut"
        QT_MOC_LITERAL(26, 4),  // "copy"
        QT_MOC_LITERAL(31, 5),  // "paste"
        QT_MOC_LITERAL(37, 3),  // "del"
        QT_MOC_LITERAL(41, 16),  // "selectCurrentRow"
        QT_MOC_LITERAL(58, 19),  // "selectCurrentColumn"
        QT_MOC_LITERAL(78, 11),  // "recalculate"
        QT_MOC_LITERAL(90, 18),  // "setAutoRecalculate"
        QT_MOC_LITERAL(109, 2),  // "on"
        QT_MOC_LITERAL(112, 8),  // "findNext"
        QT_MOC_LITERAL(121, 3),  // "str"
        QT_MOC_LITERAL(125, 19),  // "Qt::CaseSensitivity"
        QT_MOC_LITERAL(145, 2),  // "cs"
        QT_MOC_LITERAL(148, 8),  // "findPrev"
        QT_MOC_LITERAL(157, 16)   // "someThingChanged"
    },
    "SpreadSheet",
    "modified",
    "",
    "cut",
    "copy",
    "paste",
    "del",
    "selectCurrentRow",
    "selectCurrentColumn",
    "recalculate",
    "setAutoRecalculate",
    "on",
    "findNext",
    "str",
    "Qt::CaseSensitivity",
    "cs",
    "findPrev",
    "someThingChanged"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SpreadSheet[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   87,    2, 0x0a,    2 /* Public */,
       4,    0,   88,    2, 0x0a,    3 /* Public */,
       5,    0,   89,    2, 0x0a,    4 /* Public */,
       6,    0,   90,    2, 0x0a,    5 /* Public */,
       7,    0,   91,    2, 0x0a,    6 /* Public */,
       8,    0,   92,    2, 0x0a,    7 /* Public */,
       9,    0,   93,    2, 0x0a,    8 /* Public */,
      10,    1,   94,    2, 0x0a,    9 /* Public */,
      12,    2,   97,    2, 0x0a,   11 /* Public */,
      16,    2,  102,    2, 0x0a,   14 /* Public */,
      17,    0,  107,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,   13,   15,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SpreadSheet::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_SpreadSheet.offsetsAndSizes,
    qt_meta_data_SpreadSheet,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SpreadSheet_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpreadSheet, std::true_type>,
        // method 'modified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paste'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'del'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectCurrentRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectCurrentColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recalculate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAutoRecalculate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'findNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::false_type>,
        // method 'findPrev'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::false_type>,
        // method 'someThingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SpreadSheet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpreadSheet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->cut(); break;
        case 2: _t->copy(); break;
        case 3: _t->paste(); break;
        case 4: _t->del(); break;
        case 5: _t->selectCurrentRow(); break;
        case 6: _t->selectCurrentColumn(); break;
        case 7: _t->recalculate(); break;
        case 8: _t->setAutoRecalculate((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->findNext((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[2]))); break;
        case 10: _t->findPrev((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::CaseSensitivity>>(_a[2]))); break;
        case 11: _t->someThingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpreadSheet::*)();
            if (_t _q_method = &SpreadSheet::modified; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SpreadSheet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpreadSheet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadSheet.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int SpreadSheet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SpreadSheet::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
