#ifndef EASYPLAYER_H
#define EASYPLAYER_H

#include <QtGui/QMainWindow>
#include "ui_easyplayer.h"

#include <sys/types.h>

class EasyPlayer : public QMainWindow
{
    Q_OBJECT

public:
    EasyPlayer(QWidget *parent = 0);
    ~EasyPlayer();

    void play (const QString & sPipeline);

protected:
    pid_t m_gstPid;

    pid_t execGst (const QString & sPipeline);

private:
    Ui::EasyPlayerClass ui;

    static void execute (const char * sFilename, const char * sArguments);

private slots:
    void killGst (void);

};

#endif // EASYPLAYER_H