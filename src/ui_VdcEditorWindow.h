/********************************************************************************
** Form generated from reading UI file 'VdcEditorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VDCEDITORWINDOW_H
#define UI_VDCEDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plot/FrequencyPlot.h"

QT_BEGIN_NAMESPACE

class Ui_VdcEditorWindowHost
{
public:
    QAction *actionAdd_Point;
    QAction *actionRemove_Point;
    QAction *actionOpen;
    QAction *actionSaveAs;
    QAction *actionIntroduction;
    QAction *actionKey_shortcuts;
    QAction *actionAutoEQ_ParametricEQ_txt;
    QAction *actionQ_BW_Calculator;
    QAction *actionimportVDC_file;
    QAction *actionBatchVdc;
    QAction *actionSave;
    QAction *actionClose_Project;
    QAction *actionBatchAutoEq;
    QAction *actionView_undo_history;
    QAction *actionInvert_gain_2;
    QAction *actionShift_frequency;
    QAction *actionToggle_marker_points;
    QAction *actionCheck_for_unstable_filters;
    QAction *actionScr_Magnitude_response;
    QAction *actionScr_Phase_response;
    QAction *actionScr_Group_delay;
    QAction *actionReset_plot_layout;
    QAction *actionDownload_from_AutoEQ;
    QAction *actionClear_all;
    QAction *actionEnable_table_debug_mode;
    QAction *actionCurve_fitting;
    QAction *actionCheck_for_updates;
    QAction *actionVDC;
    QAction *actionEqualizerAPO_configuration;
    QAction *actionCSV_dataset;
    QAction *actionSwitch_orientation;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView_DDCPoints;
    QGroupBox *plotcontainer;
    QToolBar *toolBar_file;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuToold;
    QMenu *menuBatch_Conversion_2;
    QMenu *menuView;
    QMenu *menuSave_screenshot;
    QMenu *menuEdit;
    QMenu *menuSelection;
    QMenu *menuProject;
    QMenu *menuImport;
    QMenu *menuExport;
    QMenu *menuRecents_projects;
    QDockWidget *magnitude_dock;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QFrame *magnitude_frame;
    QVBoxLayout *verticalLayout_2;
    FrequencyPlot *graph;
    QDockWidget *phase_dock;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QFrame *phase_frame;
    QHBoxLayout *horizontalLayout_20;
    FrequencyPlot *phase_graph;
    QDockWidget *groupdelay_dock;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_7;
    QFrame *groupdelay_frame;
    QHBoxLayout *horizontalLayout_18;
    FrequencyPlot *gdelay_graph;
    QToolBar *toolBar_point;
    QStatusBar *updateBar;

    void setupUi(QMainWindow *VdcEditorWindowHost)
    {
        if (VdcEditorWindowHost->objectName().isEmpty())
            VdcEditorWindowHost->setObjectName(QString::fromUtf8("VdcEditorWindowHost"));
        VdcEditorWindowHost->resize(976, 541);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        VdcEditorWindowHost->setWindowIcon(icon);
        VdcEditorWindowHost->setDockNestingEnabled(false);
        VdcEditorWindowHost->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        actionAdd_Point = new QAction(VdcEditorWindowHost);
        actionAdd_Point->setObjectName(QString::fromUtf8("actionAdd_Point"));
        actionRemove_Point = new QAction(VdcEditorWindowHost);
        actionRemove_Point->setObjectName(QString::fromUtf8("actionRemove_Point"));
        actionOpen = new QAction(VdcEditorWindowHost);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/open_folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSaveAs = new QAction(VdcEditorWindowHost);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/saveas.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon2);
        actionIntroduction = new QAction(VdcEditorWindowHost);
        actionIntroduction->setObjectName(QString::fromUtf8("actionIntroduction"));
        actionKey_shortcuts = new QAction(VdcEditorWindowHost);
        actionKey_shortcuts->setObjectName(QString::fromUtf8("actionKey_shortcuts"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/help.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionKey_shortcuts->setIcon(icon3);
        actionAutoEQ_ParametricEQ_txt = new QAction(VdcEditorWindowHost);
        actionAutoEQ_ParametricEQ_txt->setObjectName(QString::fromUtf8("actionAutoEQ_ParametricEQ_txt"));
        actionQ_BW_Calculator = new QAction(VdcEditorWindowHost);
        actionQ_BW_Calculator->setObjectName(QString::fromUtf8("actionQ_BW_Calculator"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/calculator.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionQ_BW_Calculator->setIcon(icon4);
        actionimportVDC_file = new QAction(VdcEditorWindowHost);
        actionimportVDC_file->setObjectName(QString::fromUtf8("actionimportVDC_file"));
        actionBatchVdc = new QAction(VdcEditorWindowHost);
        actionBatchVdc->setObjectName(QString::fromUtf8("actionBatchVdc"));
        actionSave = new QAction(VdcEditorWindowHost);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon5);
        actionClose_Project = new QAction(VdcEditorWindowHost);
        actionClose_Project->setObjectName(QString::fromUtf8("actionClose_Project"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_Project->setIcon(icon6);
        actionBatchAutoEq = new QAction(VdcEditorWindowHost);
        actionBatchAutoEq->setObjectName(QString::fromUtf8("actionBatchAutoEq"));
        actionView_undo_history = new QAction(VdcEditorWindowHost);
        actionView_undo_history->setObjectName(QString::fromUtf8("actionView_undo_history"));
        actionInvert_gain_2 = new QAction(VdcEditorWindowHost);
        actionInvert_gain_2->setObjectName(QString::fromUtf8("actionInvert_gain_2"));
        actionShift_frequency = new QAction(VdcEditorWindowHost);
        actionShift_frequency->setObjectName(QString::fromUtf8("actionShift_frequency"));
        actionToggle_marker_points = new QAction(VdcEditorWindowHost);
        actionToggle_marker_points->setObjectName(QString::fromUtf8("actionToggle_marker_points"));
        actionToggle_marker_points->setCheckable(true);
        actionCheck_for_unstable_filters = new QAction(VdcEditorWindowHost);
        actionCheck_for_unstable_filters->setObjectName(QString::fromUtf8("actionCheck_for_unstable_filters"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/database_test.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheck_for_unstable_filters->setIcon(icon7);
        actionScr_Magnitude_response = new QAction(VdcEditorWindowHost);
        actionScr_Magnitude_response->setObjectName(QString::fromUtf8("actionScr_Magnitude_response"));
        actionScr_Phase_response = new QAction(VdcEditorWindowHost);
        actionScr_Phase_response->setObjectName(QString::fromUtf8("actionScr_Phase_response"));
        actionScr_Group_delay = new QAction(VdcEditorWindowHost);
        actionScr_Group_delay->setObjectName(QString::fromUtf8("actionScr_Group_delay"));
        actionReset_plot_layout = new QAction(VdcEditorWindowHost);
        actionReset_plot_layout->setObjectName(QString::fromUtf8("actionReset_plot_layout"));
        actionDownload_from_AutoEQ = new QAction(VdcEditorWindowHost);
        actionDownload_from_AutoEQ->setObjectName(QString::fromUtf8("actionDownload_from_AutoEQ"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/download.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDownload_from_AutoEQ->setIcon(icon8);
        actionClear_all = new QAction(VdcEditorWindowHost);
        actionClear_all->setObjectName(QString::fromUtf8("actionClear_all"));
        actionEnable_table_debug_mode = new QAction(VdcEditorWindowHost);
        actionEnable_table_debug_mode->setObjectName(QString::fromUtf8("actionEnable_table_debug_mode"));
        actionEnable_table_debug_mode->setCheckable(true);
        actionCurve_fitting = new QAction(VdcEditorWindowHost);
        actionCurve_fitting->setObjectName(QString::fromUtf8("actionCurve_fitting"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/curve_fitting.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCurve_fitting->setIcon(icon9);
        actionCheck_for_updates = new QAction(VdcEditorWindowHost);
        actionCheck_for_updates->setObjectName(QString::fromUtf8("actionCheck_for_updates"));
        actionVDC = new QAction(VdcEditorWindowHost);
        actionVDC->setObjectName(QString::fromUtf8("actionVDC"));
        actionEqualizerAPO_configuration = new QAction(VdcEditorWindowHost);
        actionEqualizerAPO_configuration->setObjectName(QString::fromUtf8("actionEqualizerAPO_configuration"));
        actionCSV_dataset = new QAction(VdcEditorWindowHost);
        actionCSV_dataset->setObjectName(QString::fromUtf8("actionCSV_dataset"));
        actionSwitch_orientation = new QAction(VdcEditorWindowHost);
        actionSwitch_orientation->setObjectName(QString::fromUtf8("actionSwitch_orientation"));
        actionSwitch_orientation->setCheckable(true);
        centralWidget = new QWidget(VdcEditorWindowHost);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(4);
        splitter->setChildrenCollapsible(true);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        tableView_DDCPoints = new QTableView(groupBox);
        tableView_DDCPoints->setObjectName(QString::fromUtf8("tableView_DDCPoints"));
        tableView_DDCPoints->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView_DDCPoints->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView_DDCPoints->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView_DDCPoints->setSortingEnabled(true);
        tableView_DDCPoints->verticalHeader()->setVisible(true);

        verticalLayout->addWidget(tableView_DDCPoints);

        splitter->addWidget(groupBox);
        plotcontainer = new QGroupBox(splitter);
        plotcontainer->setObjectName(QString::fromUtf8("plotcontainer"));
        splitter->addWidget(plotcontainer);

        horizontalLayout->addWidget(splitter);

        VdcEditorWindowHost->setCentralWidget(centralWidget);
        toolBar_file = new QToolBar(VdcEditorWindowHost);
        toolBar_file->setObjectName(QString::fromUtf8("toolBar_file"));
        toolBar_file->setIconSize(QSize(16, 16));
        toolBar_file->setToolButtonStyle(Qt::ToolButtonIconOnly);
        VdcEditorWindowHost->addToolBar(Qt::TopToolBarArea, toolBar_file);
        menuBar = new QMenuBar(VdcEditorWindowHost);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 976, 18));
        menuBar->setNativeMenuBar(true);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuToold = new QMenu(menuBar);
        menuToold->setObjectName(QString::fromUtf8("menuToold"));
        menuBatch_Conversion_2 = new QMenu(menuToold);
        menuBatch_Conversion_2->setObjectName(QString::fromUtf8("menuBatch_Conversion_2"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSave_screenshot = new QMenu(menuView);
        menuSave_screenshot->setObjectName(QString::fromUtf8("menuSave_screenshot"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuSelection = new QMenu(menuBar);
        menuSelection->setObjectName(QString::fromUtf8("menuSelection"));
        menuProject = new QMenu(menuBar);
        menuProject->setObjectName(QString::fromUtf8("menuProject"));
        menuProject->setTearOffEnabled(false);
        menuImport = new QMenu(menuProject);
        menuImport->setObjectName(QString::fromUtf8("menuImport"));
        menuExport = new QMenu(menuProject);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        menuRecents_projects = new QMenu(menuProject);
        menuRecents_projects->setObjectName(QString::fromUtf8("menuRecents_projects"));
        menuRecents_projects->setTearOffEnabled(false);
        menuRecents_projects->setSeparatorsCollapsible(false);
        VdcEditorWindowHost->setMenuBar(menuBar);
        magnitude_dock = new QDockWidget(VdcEditorWindowHost);
        magnitude_dock->setObjectName(QString::fromUtf8("magnitude_dock"));
        magnitude_dock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        magnitude_frame = new QFrame(dockWidgetContents);
        magnitude_frame->setObjectName(QString::fromUtf8("magnitude_frame"));
        magnitude_frame->setMinimumSize(QSize(200, 100));
        magnitude_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(208, 204, 201) "));
        magnitude_frame->setFrameShape(QFrame::Box);
        magnitude_frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(magnitude_frame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        graph = new FrequencyPlot(magnitude_frame);
        graph->setObjectName(QString::fromUtf8("graph"));

        verticalLayout_2->addWidget(graph);


        verticalLayout_5->addWidget(magnitude_frame);

        magnitude_dock->setWidget(dockWidgetContents);
        VdcEditorWindowHost->addDockWidget(Qt::RightDockWidgetArea, magnitude_dock);
        phase_dock = new QDockWidget(VdcEditorWindowHost);
        phase_dock->setObjectName(QString::fromUtf8("phase_dock"));
        phase_dock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        phase_frame = new QFrame(dockWidgetContents_2);
        phase_frame->setObjectName(QString::fromUtf8("phase_frame"));
        phase_frame->setMinimumSize(QSize(200, 100));
        phase_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(208, 204, 201) "));
        phase_frame->setFrameShape(QFrame::NoFrame);
        phase_frame->setFrameShadow(QFrame::Plain);
        horizontalLayout_20 = new QHBoxLayout(phase_frame);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(9, 9, -1, -1);
        phase_graph = new FrequencyPlot(phase_frame);
        phase_graph->setObjectName(QString::fromUtf8("phase_graph"));

        horizontalLayout_20->addWidget(phase_graph);


        verticalLayout_6->addWidget(phase_frame);

        phase_dock->setWidget(dockWidgetContents_2);
        VdcEditorWindowHost->addDockWidget(Qt::RightDockWidgetArea, phase_dock);
        groupdelay_dock = new QDockWidget(VdcEditorWindowHost);
        groupdelay_dock->setObjectName(QString::fromUtf8("groupdelay_dock"));
        groupdelay_dock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        verticalLayout_7 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupdelay_frame = new QFrame(dockWidgetContents_3);
        groupdelay_frame->setObjectName(QString::fromUtf8("groupdelay_frame"));
        groupdelay_frame->setMinimumSize(QSize(200, 100));
        groupdelay_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border: 1px solid rgb(208, 204, 201) "));
        groupdelay_frame->setFrameShape(QFrame::NoFrame);
        groupdelay_frame->setFrameShadow(QFrame::Plain);
        horizontalLayout_18 = new QHBoxLayout(groupdelay_frame);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(9, 9, -1, -1);
        gdelay_graph = new FrequencyPlot(groupdelay_frame);
        gdelay_graph->setObjectName(QString::fromUtf8("gdelay_graph"));

        horizontalLayout_18->addWidget(gdelay_graph);


        verticalLayout_7->addWidget(groupdelay_frame);

        groupdelay_dock->setWidget(dockWidgetContents_3);
        VdcEditorWindowHost->addDockWidget(Qt::RightDockWidgetArea, groupdelay_dock);
        toolBar_point = new QToolBar(VdcEditorWindowHost);
        toolBar_point->setObjectName(QString::fromUtf8("toolBar_point"));
        toolBar_point->setIconSize(QSize(16, 16));
        toolBar_point->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        VdcEditorWindowHost->addToolBar(Qt::TopToolBarArea, toolBar_point);
        updateBar = new QStatusBar(VdcEditorWindowHost);
        updateBar->setObjectName(QString::fromUtf8("updateBar"));
        updateBar->setStyleSheet(QString::fromUtf8(""));
        updateBar->setSizeGripEnabled(false);
        VdcEditorWindowHost->setStatusBar(updateBar);

        toolBar_file->addAction(actionOpen);
        toolBar_file->addAction(actionSave);
        toolBar_file->addAction(actionSaveAs);
        toolBar_file->addAction(actionCheck_for_unstable_filters);
        toolBar_file->addSeparator();
        menuBar->addAction(menuProject->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuSelection->menuAction());
        menuBar->addAction(menuToold->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addSeparator();
        menuHelp->addAction(actionIntroduction);
        menuHelp->addAction(actionKey_shortcuts);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheck_for_updates);
        menuToold->addAction(menuBatch_Conversion_2->menuAction());
        menuToold->addAction(actionQ_BW_Calculator);
        menuToold->addSeparator();
        menuToold->addAction(actionCheck_for_unstable_filters);
        menuToold->addSeparator();
        menuToold->addAction(actionEnable_table_debug_mode);
        menuBatch_Conversion_2->addAction(actionBatchVdc);
        menuBatch_Conversion_2->addAction(actionBatchAutoEq);
        menuView->addAction(actionReset_plot_layout);
        menuView->addAction(actionToggle_marker_points);
        menuView->addAction(actionSwitch_orientation);
        menuView->addSeparator();
        menuView->addAction(menuSave_screenshot->menuAction());
        menuSave_screenshot->addAction(actionScr_Magnitude_response);
        menuSave_screenshot->addAction(actionScr_Phase_response);
        menuSave_screenshot->addAction(actionScr_Group_delay);
        menuEdit->addSeparator();
        menuEdit->addAction(actionView_undo_history);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAdd_Point);
        menuEdit->addAction(actionRemove_Point);
        menuSelection->addAction(actionInvert_gain_2);
        menuSelection->addAction(actionShift_frequency);
        menuSelection->addAction(actionRemove_Point);
        menuProject->addSeparator();
        menuProject->addAction(actionOpen);
        menuProject->addAction(actionSave);
        menuProject->addAction(actionSaveAs);
        menuProject->addAction(actionClose_Project);
        menuProject->addAction(menuRecents_projects->menuAction());
        menuProject->addSeparator();
        menuProject->addAction(actionDownload_from_AutoEQ);
        menuProject->addAction(actionCurve_fitting);
        menuProject->addSeparator();
        menuProject->addAction(menuImport->menuAction());
        menuProject->addAction(menuExport->menuAction());
        menuImport->addAction(actionAutoEQ_ParametricEQ_txt);
        menuImport->addAction(actionimportVDC_file);
        menuExport->addSeparator();
        menuExport->addAction(actionVDC);
        menuExport->addAction(actionCSV_dataset);
        menuExport->addAction(actionEqualizerAPO_configuration);
        menuRecents_projects->addSeparator();
        toolBar_point->addAction(actionAdd_Point);
        toolBar_point->addAction(actionRemove_Point);

        retranslateUi(VdcEditorWindowHost);
        QObject::connect(actionAdd_Point, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(addPoint()));
        QObject::connect(actionRemove_Point, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(removePoint()));
        QObject::connect(actionOpen, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(loadProject()));
        QObject::connect(actionSaveAs, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(saveProject()));
        QObject::connect(actionKey_shortcuts, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(showHelp()));
        QObject::connect(actionIntroduction, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(showHelp()));
        QObject::connect(actionAutoEQ_ParametricEQ_txt, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(importParametricAutoEQ()));
        QObject::connect(actionQ_BW_Calculator, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(showCalc()));
        QObject::connect(actionimportVDC_file, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(importClassicVdc()));
        QObject::connect(actionClose_Project, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(closeProject()));
        QObject::connect(actionSave, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(saveProject()));
        QObject::connect(actionView_undo_history, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(showUndoView()));
        QObject::connect(actionInvert_gain_2, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(invertSelection()));
        QObject::connect(actionShift_frequency, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(shiftSelection()));
        QObject::connect(actionVDC, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(exportProject()));
        QObject::connect(actionToggle_marker_points, SIGNAL(triggered(bool)), VdcEditorWindowHost, SLOT(showPointsAlways(bool)));
        QObject::connect(actionCheck_for_unstable_filters, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(checkStability()));
        QObject::connect(actionScr_Magnitude_response, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(savePlotScreenshot()));
        QObject::connect(actionScr_Phase_response, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(savePlotScreenshot()));
        QObject::connect(actionScr_Group_delay, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(savePlotScreenshot()));
        QObject::connect(actionDownload_from_AutoEQ, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(downloadFromAutoEQ()));
        QObject::connect(actionClear_all, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(clearAll()));
        QObject::connect(actionBatchAutoEq, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(batchConvert()));
        QObject::connect(actionBatchVdc, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(batchConvert()));
        QObject::connect(actionEnable_table_debug_mode, SIGNAL(toggled(bool)), VdcEditorWindowHost, SLOT(setDebugMode(bool)));
        QObject::connect(actionCurve_fitting, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(curveFitting()));
        QObject::connect(actionEqualizerAPO_configuration, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(exportProject()));
        QObject::connect(actionCSV_dataset, SIGNAL(triggered()), VdcEditorWindowHost, SLOT(exportProject()));
        QObject::connect(actionSwitch_orientation, SIGNAL(toggled(bool)), VdcEditorWindowHost, SLOT(setOrientation(bool)));

        QMetaObject::connectSlotsByName(VdcEditorWindowHost);
    } // setupUi

    void retranslateUi(QMainWindow *VdcEditorWindowHost)
    {
        VdcEditorWindowHost->setWindowTitle(QCoreApplication::translate("VdcEditorWindowHost", "DDCToolbox", nullptr));
        actionAdd_Point->setText(QCoreApplication::translate("VdcEditorWindowHost", "Add filter", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_Point->setToolTip(QCoreApplication::translate("VdcEditorWindowHost", "Add filter", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAdd_Point->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemove_Point->setText(QCoreApplication::translate("VdcEditorWindowHost", "Remove selection", nullptr));
#if QT_CONFIG(tooltip)
        actionRemove_Point->setToolTip(QCoreApplication::translate("VdcEditorWindowHost", "Remove selected point(s)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRemove_Point->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("VdcEditorWindowHost", "Load project", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("VdcEditorWindowHost", "Save as...", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIntroduction->setText(QCoreApplication::translate("VdcEditorWindowHost", "Credits", nullptr));
        actionKey_shortcuts->setText(QCoreApplication::translate("VdcEditorWindowHost", "Shortcuts", nullptr));
#if QT_CONFIG(shortcut)
        actionKey_shortcuts->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAutoEQ_ParametricEQ_txt->setText(QCoreApplication::translate("VdcEditorWindowHost", "AutoEQ (ParametricEQ.txt)", nullptr));
        actionQ_BW_Calculator->setText(QCoreApplication::translate("VdcEditorWindowHost", "Q/Bandwidth calculator", nullptr));
        actionimportVDC_file->setText(QCoreApplication::translate("VdcEditorWindowHost", "VDC file (Classic Viper format)", nullptr));
        actionBatchVdc->setText(QCoreApplication::translate("VdcEditorWindowHost", "VDC to Project File", nullptr));
        actionSave->setText(QCoreApplication::translate("VdcEditorWindowHost", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose_Project->setText(QCoreApplication::translate("VdcEditorWindowHost", "Close project", nullptr));
#if QT_CONFIG(shortcut)
        actionClose_Project->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBatchAutoEq->setText(QCoreApplication::translate("VdcEditorWindowHost", "AutoEQ (Parametric) to Project File", nullptr));
        actionView_undo_history->setText(QCoreApplication::translate("VdcEditorWindowHost", "View undo history", nullptr));
#if QT_CONFIG(shortcut)
        actionView_undo_history->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Alt+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInvert_gain_2->setText(QCoreApplication::translate("VdcEditorWindowHost", "Invert gain", nullptr));
#if QT_CONFIG(shortcut)
        actionInvert_gain_2->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Ctrl+Shift+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShift_frequency->setText(QCoreApplication::translate("VdcEditorWindowHost", "Shift frequencies", nullptr));
#if QT_CONFIG(tooltip)
        actionShift_frequency->setToolTip(QCoreApplication::translate("VdcEditorWindowHost", "Shift frequencies", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionShift_frequency->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Ctrl+Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggle_marker_points->setText(QCoreApplication::translate("VdcEditorWindowHost", "Show marker points", nullptr));
#if QT_CONFIG(shortcut)
        actionToggle_marker_points->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCheck_for_unstable_filters->setText(QCoreApplication::translate("VdcEditorWindowHost", "Check for unstable filters", nullptr));
#if QT_CONFIG(shortcut)
        actionCheck_for_unstable_filters->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionScr_Magnitude_response->setText(QCoreApplication::translate("VdcEditorWindowHost", "Magnitude response", nullptr));
        actionScr_Phase_response->setText(QCoreApplication::translate("VdcEditorWindowHost", "Phase response", nullptr));
        actionScr_Group_delay->setText(QCoreApplication::translate("VdcEditorWindowHost", "Group delay", nullptr));
        actionReset_plot_layout->setText(QCoreApplication::translate("VdcEditorWindowHost", "Reset plot layout", nullptr));
#if QT_CONFIG(shortcut)
        actionReset_plot_layout->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDownload_from_AutoEQ->setText(QCoreApplication::translate("VdcEditorWindowHost", "Download from AutoEQ...", nullptr));
        actionClear_all->setText(QCoreApplication::translate("VdcEditorWindowHost", "Clear all", nullptr));
        actionEnable_table_debug_mode->setText(QCoreApplication::translate("VdcEditorWindowHost", "Enable table debug mode", nullptr));
        actionCurve_fitting->setText(QCoreApplication::translate("VdcEditorWindowHost", "Peaking filter curve fitting", nullptr));
        actionCheck_for_updates->setText(QCoreApplication::translate("VdcEditorWindowHost", "Check for updates...", nullptr));
        actionVDC->setText(QCoreApplication::translate("VdcEditorWindowHost", "VDC file", nullptr));
        actionEqualizerAPO_configuration->setText(QCoreApplication::translate("VdcEditorWindowHost", "EqualizerAPO configuration", nullptr));
        actionCSV_dataset->setText(QCoreApplication::translate("VdcEditorWindowHost", "CSV dataset", nullptr));
        actionSwitch_orientation->setText(QCoreApplication::translate("VdcEditorWindowHost", "Switch orientation", nullptr));
#if QT_CONFIG(shortcut)
        actionSwitch_orientation->setShortcut(QCoreApplication::translate("VdcEditorWindowHost", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        groupBox->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Dataset", nullptr));
        plotcontainer->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Plots", nullptr));
        toolBar_file->setWindowTitle(QCoreApplication::translate("VdcEditorWindowHost", "Project Toolbar", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Help", nullptr));
        menuToold->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Tools", nullptr));
        menuBatch_Conversion_2->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Batch conversion", nullptr));
        menuView->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "View", nullptr));
        menuSave_screenshot->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Save screenshot", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Edit", nullptr));
        menuSelection->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Selection", nullptr));
        menuProject->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Project", nullptr));
        menuImport->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Import", nullptr));
        menuExport->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Export", nullptr));
        menuRecents_projects->setTitle(QCoreApplication::translate("VdcEditorWindowHost", "Recent projects...", nullptr));
        magnitude_dock->setWindowTitle(QCoreApplication::translate("VdcEditorWindowHost", "Magnitude Response", nullptr));
        phase_dock->setWindowTitle(QCoreApplication::translate("VdcEditorWindowHost", "Phase Response", nullptr));
        groupdelay_dock->setWindowTitle(QCoreApplication::translate("VdcEditorWindowHost", "Group Delay", nullptr));
        toolBar_point->setWindowTitle(QCoreApplication::translate("VdcEditorWindowHost", "Filter Toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VdcEditorWindowHost: public Ui_VdcEditorWindowHost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VDCEDITORWINDOW_H
