object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'HTTP '#1089#1077#1088#1074#1077#1088
  ClientHeight = 517
  ClientWidth = 500
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 500
    Height = 137
    Align = alTop
    TabOrder = 7
    object LMDLabel1: TLMDLabel
      Left = 234
      Top = 21
      Width = 27
      Height = 15
      Bevel.Mode = bmCustom
      Options = []
      Caption = #1055#1086#1088#1090
    end
    object LMDLabel2: TLMDLabel
      Left = 169
      Top = 116
      Width = 49
      Height = 15
      Bevel.Mode = bmCustom
      Options = []
      Caption = #1051#1086#1075' '#1092#1072#1081#1083
    end
    object LMDLabel3: TLMDLabel
      Left = 121
      Top = 50
      Width = 51
      Height = 28
      Bevel.Mode = bmCustom
      MultiLine = True
      Options = []
      Caption = #1050#1086#1088#1085#1077#1074#1086#1081' '#1082#1072#1090#1072#1083#1086#1075
    end
    object LMDLabel4: TLMDLabel
      Left = 95
      Top = 77
      Width = 84
      Height = 28
      Bevel.Mode = bmCustom
      MultiLine = True
      Options = []
      Caption = #1048#1085#1090#1077#1088#1087#1088#1077#1090#1072#1090#1086#1088' PHP'
    end
    object RootDirEdit: TLMDEdit
      Left = 176
      Top = 50
      Width = 305
      Height = 21
      Bevel.Mode = bmWindows
      Caret.BlinkRate = 500
      TabOrder = 0
      CustomButtons = <>
      PasswordChar = #0
    end
    object AutoChkBox: TLMDCheckBox
      Left = 8
      Top = 48
      Width = 81
      Height = 33
      Caption = #1040#1074#1090#1086#1079#1072#1084#1077#1085#1072' '#1088#1080#1089#1091#1085#1082#1086#1074
      Alignment.Alignment = agTopLeft
      Alignment.Spacing = 4
      TabOrder = 1
    end
    object PHPEdit: TLMDEdit
      Left = 178
      Top = 77
      Width = 303
      Height = 21
      Bevel.Mode = bmWindows
      Caret.BlinkRate = 530
      TabOrder = 2
      CustomButtons = <>
      PasswordChar = #0
      Text = 'c:\DOCUM\Works\INFO\PHP\php-5.2.11-Win32\php-cgi.exe'
    end
  end
  object LogListBox: TLMDListBox
    Left = 0
    Top = 137
    Width = 500
    Height = 380
    Align = alClient
    Color = clWindow
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    TabOrder = 0
    FullRepaint = True
    GridLines = glBoth
    HeaderFont.Charset = DEFAULT_CHARSET
    HeaderFont.Color = clWindowText
    HeaderFont.Height = -11
    HeaderFont.Name = 'Tahoma'
    HeaderFont.Style = []
    HeaderSections = <
      item
        ImageIndex = -1
        Text = #1057#1086#1073#1099#1090#1080#1103
        Width = 370
      end
      item
        ImageIndex = -1
        Text = #1042#1088#1077#1084#1103
        Width = 100
      end>
    ItemHeight = 16
  end
  object PortEdit: TLMDEdit
    Left = 267
    Top = 21
    Width = 97
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 1
    CustomButtons = <>
    PasswordChar = #0
    Text = '5999'
  end
  object HttpServAct: TLMDCheckBox
    Left = 8
    Top = 8
    Width = 153
    Height = 16
    Caption = 'HTTP c'#1077#1088#1074#1077#1088' '#1072#1082#1090#1080#1074#1077#1085
    Alignment.Alignment = agTopLeft
    Alignment.Spacing = 4
    TabOrder = 2
    OnClick = HttpServActClick
    Checked = True
    State = cbChecked
  end
  object LMDButton1: TLMDButton
    Left = 406
    Top = 17
    Width = 75
    Height = 25
    Caption = #1082#1086#1076' HTML'
    TabOrder = 3
    OnClick = LMDButton1Click
  end
  object AutoScrChkBox: TLMDCheckBox
    Left = 8
    Top = 114
    Width = 105
    Height = 17
    Caption = #1040#1074#1090#1086#1087#1088#1086#1082#1088#1091#1090#1082#1072
    Alignment.Alignment = agTopLeft
    Alignment.Spacing = 4
    TabOrder = 4
    Checked = True
    State = cbChecked
  end
  object LogEdit: TLMDEdit
    Left = 224
    Top = 110
    Width = 257
    Height = 21
    Hint = #1054#1073#1079#1086#1088
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 5
    CustomButtons = <
      item
        Caption = '...'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        Index = 0
        DisplayName = 'TLMDSpecialButton'
        ImageIndex = 0
        ListIndex = 0
        OnClick = LMDEdit1CustomButtons0Click
        UsePngGlyph = False
      end
      item
        Caption = '->'
        Hint = #1057#1086#1093#1088#1072#1085#1080#1090#1100
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        Index = 1
        DisplayName = 'TLMDSpecialButton'
        ImageIndex = 0
        ListIndex = 0
        OnClick = LMDEdit1CustomButtons1Click
        UsePngGlyph = False
      end>
    PasswordChar = #0
    Text = 'eventlog.txt'
  end
  object OnlyTextChkBox: TLMDCheckBox
    Left = 8
    Top = 30
    Width = 90
    Height = 17
    Caption = #1058#1086#1083#1100#1082#1086' '#1090#1077#1082#1089#1090
    Alignment.Alignment = agTopLeft
    Alignment.Spacing = 4
    TabOrder = 6
  end
  object IdHTTPServer1: TIdHTTPServer
    OnStatus = IdHTTPServer1Status
    Bindings = <>
    OnBeforeBind = IdHTTPServer1BeforeBind
    OnAfterBind = IdHTTPServer1AfterBind
    OnBeforeListenerRun = IdHTTPServer1BeforeListenerRun
    OnContextCreated = IdHTTPServer1ContextCreated
    OnConnect = IdHTTPServer1Connect
    OnDisconnect = IdHTTPServer1Disconnect
    OnException = IdHTTPServer1Exception
    OnListenException = IdHTTPServer1ListenException
    AutoStartSession = True
    SessionTimeOut = 1200000
    OnCommandError = IdHTTPServer1CommandError
    OnCommandOther = IdHTTPServer1CommandOther
    OnCreateSession = IdHTTPServer1CreateSession
    OnInvalidSession = IdHTTPServer1InvalidSession
    OnHeadersAvailable = IdHTTPServer1HeadersAvailable
    OnHeadersBlocked = IdHTTPServer1HeadersBlocked
    OnHeaderExpectations = IdHTTPServer1HeaderExpectations
    OnParseAuthentication = IdHTTPServer1ParseAuthentication
    OnQuerySSLPort = IdHTTPServer1QuerySSLPort
    OnSessionStart = IdHTTPServer1SessionStart
    OnSessionEnd = IdHTTPServer1SessionEnd
    OnCreatePostStream = IdHTTPServer1CreatePostStream
    OnDoneWithPostStream = IdHTTPServer1DoneWithPostStream
    OnCommandGet = IdHTTPServer1CommandGet
    Left = 144
    Top = 185
  end
  object IniCtrl1: TLMDIniCtrl
    Left = 345
    Top = 187
  end
  object idCGIRunner1: TidCGIRunner
    Server = IdHTTPServer1
    TimeOut = 0
    TimeOutMsg = '<html><body><h1><center>Process was terminated.</body></html>'
    ErrorMsg = '<html><body><h1><center>Internal Server Error</body></html>'
    ServerAdmin = 'admin@server'
    Left = 241
    Top = 184
  end
end
