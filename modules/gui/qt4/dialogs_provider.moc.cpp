/****************************************************************************
** Meta object code from reading C++ file 'dialogs_provider.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"

#include "dialogs_provider.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogs_provider.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogsProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   16,   16,   16, 0x0a,
      55,   16,   16,   16, 0x0a,
      72,   16,   16,   16, 0x0a,
      90,   16,   16,   16, 0x0a,
     108,   16,   16,   16, 0x0a,
     127,   16,   16,   16, 0x0a,
     141,   16,   16,   16, 0x0a,
     158,   16,   16,   16, 0x0a,
     174,   16,   16,   16, 0x0a,
     191,   16,   16,   16, 0x0a,
     203,   16,   16,   16, 0x0a,
     216,   16,   16,   16, 0x0a,
     230,   16,   16,   16, 0x0a,
     247,   16,   16,   16, 0x0a,
     272,   16,   16,   16, 0x0a,
     288,   16,   16,   16, 0x0a,
     303,   16,   16,   16, 0x0a,
     315,   16,   16,   16, 0x0a,
     358,   16,   16,   16, 0x0a,
     377,   16,   16,   16, 0x0a,
     400,   16,   16,   16, 0x0a,
     423,   16,   16,   16, 0x0a,
     436,   16,   16,   16, 0x0a,
     453,   16,   16,   16, 0x0a,
     470,   16,   16,   16, 0x0a,
     486,   16,   16,   16, 0x0a,
     502,   16,   16,   16, 0x0a,
     526,  522,   16,   16, 0x0a,
     546,   16,   16,   16, 0x2a,
     563,  522,   16,   16, 0x0a,
     583,   16,   16,   16, 0x2a,
     600,   16,   16,   16, 0x0a,
     612,   16,   16,   16, 0x0a,
     626,   16,   16,   16, 0x0a,
     668,  640,   16,   16, 0x0a,
     739,  719,   16,   16, 0x2a,
     789,  778,   16,   16, 0x2a,
     823,   16,   16,   16, 0x0a,
     849,   16,   16,   16, 0x0a,
     877,   16,   16,   16, 0x0a,
     893,   16,   16,   16, 0x0a,
     909,   16,   16,   16, 0x0a,
     929,   16,   16,   16, 0x0a,
     936,   16,   16,   16, 0x08,
     957,   16,   16,   16, 0x08,
     984,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogsProvider[] = {
    "DialogsProvider\0\0toolBarConfUpdated()\0"
    "playMRL(QString)\0playlistDialog()\0"
    "bookmarksDialog()\0mediaInfoDialog()\0"
    "mediaCodecDialog()\0prefsDialog()\0"
    "extendedDialog()\0synchroDialog()\0"
    "messagesDialog()\0vlmDialog()\0helpDialog()\0"
    "aboutDialog()\0gotoTimeDialog()\0"
    "podcastConfigureDialog()\0toolbarDialog()\0"
    "pluginDialog()\0epgDialog()\0"
    "openFileGenericDialog(intf_dialog_args_t*)\0"
    "simpleOpenDialog()\0simplePLAppendDialog()\0"
    "simpleMLAppendDialog()\0openDialog()\0"
    "openDiscDialog()\0openFileDialog()\0"
    "openUrlDialog()\0openNetDialog()\0"
    "openCaptureDialog()\0tab\0PLAppendDialog(int)\0"
    "PLAppendDialog()\0MLAppendDialog(int)\0"
    "MLAppendDialog()\0PLOpenDir()\0PLAppendDir()\0"
    "MLAppendDir()\0parent,mrl,b_stream,options\0"
    "streamingDialog(QWidget*,QString,bool,QStringList)\0"
    "parent,mrl,b_stream\0"
    "streamingDialog(QWidget*,QString,bool)\0"
    "parent,mrl\0streamingDialog(QWidget*,QString)\0"
    "openAndStreamingDialogs()\0"
    "openAndTranscodingDialogs()\0openAPlaylist()\0"
    "saveAPlaylist()\0loadSubtitlesFile()\0"
    "quit()\0menuAction(QObject*)\0"
    "menuUpdateAction(QObject*)\0"
    "SDMenuAction(QString)\0"
};

void DialogsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogsProvider *_t = static_cast<DialogsProvider *>(_o);
        switch (_id) {
        case 0: _t->toolBarConfUpdated(); break;
        case 1: _t->playMRL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->playlistDialog(); break;
        case 3: _t->bookmarksDialog(); break;
        case 4: _t->mediaInfoDialog(); break;
        case 5: _t->mediaCodecDialog(); break;
        case 6: _t->prefsDialog(); break;
        case 7: _t->extendedDialog(); break;
        case 8: _t->synchroDialog(); break;
        case 9: _t->messagesDialog(); break;
        case 10: _t->vlmDialog(); break;
        case 11: _t->helpDialog(); break;
        case 12: _t->aboutDialog(); break;
        case 13: _t->gotoTimeDialog(); break;
        case 14: _t->podcastConfigureDialog(); break;
        case 15: _t->toolbarDialog(); break;
        case 16: _t->pluginDialog(); break;
        case 17: _t->epgDialog(); break;
        case 18: _t->openFileGenericDialog((*reinterpret_cast< intf_dialog_args_t*(*)>(_a[1]))); break;
        case 19: _t->simpleOpenDialog(); break;
        case 20: _t->simplePLAppendDialog(); break;
        case 21: _t->simpleMLAppendDialog(); break;
        case 22: _t->openDialog(); break;
        case 23: _t->openDiscDialog(); break;
        case 24: _t->openFileDialog(); break;
        case 25: _t->openUrlDialog(); break;
        case 26: _t->openNetDialog(); break;
        case 27: _t->openCaptureDialog(); break;
        case 28: _t->PLAppendDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->PLAppendDialog(); break;
        case 30: _t->MLAppendDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->MLAppendDialog(); break;
        case 32: _t->PLOpenDir(); break;
        case 33: _t->PLAppendDir(); break;
        case 34: _t->MLAppendDir(); break;
        case 35: _t->streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QStringList(*)>(_a[4]))); break;
        case 36: _t->streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 37: _t->streamingDialog((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 38: _t->openAndStreamingDialogs(); break;
        case 39: _t->openAndTranscodingDialogs(); break;
        case 40: _t->openAPlaylist(); break;
        case 41: _t->saveAPlaylist(); break;
        case 42: _t->loadSubtitlesFile(); break;
        case 43: _t->quit(); break;
        case 44: _t->menuAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 45: _t->menuUpdateAction((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 46: _t->SDMenuAction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogsProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogsProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogsProvider,
      qt_meta_data_DialogsProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogsProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogsProvider))
        return static_cast<void*>(const_cast< DialogsProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int DialogsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void DialogsProvider::toolBarConfUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
