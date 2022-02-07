/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "on_close_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "on_setting_clicked"
QT_MOC_LITERAL(4, 48, 18), // "on_setting_pressed"
QT_MOC_LITERAL(5, 67, 20), // "on_startauto_pressed"
QT_MOC_LITERAL(6, 88, 17), // "on_manual_pressed"
QT_MOC_LITERAL(7, 106, 17), // "on_slide1_pressed"
QT_MOC_LITERAL(8, 124, 17), // "on_slide1_toggled"
QT_MOC_LITERAL(9, 142, 7), // "checked"
QT_MOC_LITERAL(10, 150, 17), // "on_slide2_toggled"
QT_MOC_LITERAL(11, 168, 17), // "on_slide3_toggled"
QT_MOC_LITERAL(12, 186, 17), // "on_slide4_toggled"
QT_MOC_LITERAL(13, 204, 17), // "on_slide5_toggled"
QT_MOC_LITERAL(14, 222, 17), // "on_slide6_toggled"
QT_MOC_LITERAL(15, 240, 17), // "on_slide7_toggled"
QT_MOC_LITERAL(16, 258, 17), // "on_slide8_toggled"
QT_MOC_LITERAL(17, 276, 17), // "on_slide9_toggled"
QT_MOC_LITERAL(18, 294, 15) // "on_home_clicked"

    },
    "MainWindow\0on_close_clicked\0\0"
    "on_setting_clicked\0on_setting_pressed\0"
    "on_startauto_pressed\0on_manual_pressed\0"
    "on_slide1_pressed\0on_slide1_toggled\0"
    "checked\0on_slide2_toggled\0on_slide3_toggled\0"
    "on_slide4_toggled\0on_slide5_toggled\0"
    "on_slide6_toggled\0on_slide7_toggled\0"
    "on_slide8_toggled\0on_slide9_toggled\0"
    "on_home_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    1,  100,    2, 0x08 /* Private */,
      10,    1,  103,    2, 0x08 /* Private */,
      11,    1,  106,    2, 0x08 /* Private */,
      12,    1,  109,    2, 0x08 /* Private */,
      13,    1,  112,    2, 0x08 /* Private */,
      14,    1,  115,    2, 0x08 /* Private */,
      15,    1,  118,    2, 0x08 /* Private */,
      16,    1,  121,    2, 0x08 /* Private */,
      17,    1,  124,    2, 0x08 /* Private */,
      18,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_clicked(); break;
        case 1: _t->on_setting_clicked(); break;
        case 2: _t->on_setting_pressed(); break;
        case 3: _t->on_startauto_pressed(); break;
        case 4: _t->on_manual_pressed(); break;
        case 5: _t->on_slide1_pressed(); break;
        case 6: _t->on_slide1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_slide2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_slide3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_slide4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_slide5_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_slide6_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_slide7_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_slide8_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_slide9_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_home_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
