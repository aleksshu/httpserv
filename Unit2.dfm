object Form2: TForm2
  Left = 0
  Top = 0
  Caption = #1050#1086#1076' '#1089#1090#1088#1072#1085#1080#1094#1099' http'
  ClientHeight = 661
  ClientWidth = 783
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
    Width = 783
    Height = 65
    Align = alTop
    TabOrder = 3
    object LMDLabel1: TLMDLabel
      Left = 19
      Top = 7
      Width = 82
      Height = 28
      Bevel.Mode = bmCustom
      MultiLine = True
      Options = []
      Caption = #1060#1072#1081#1083' '#1080#1089#1093#1086#1076#1085#1086#1081' http '#1089#1090#1088#1072#1085#1080#1094#1099
    end
    object LMDLabel2: TLMDLabel
      Left = 19
      Top = 41
      Width = 94
      Height = 15
      Bevel.Mode = bmCustom
      MultiLine = True
      Options = []
      Caption = #1050#1072#1090#1072#1083#1086#1075' '#1088#1080#1089#1091#1085#1082#1086#1074
    end
    object LMDLabel3: TLMDLabel
      Left = 559
      Top = 32
      Width = 40
      Height = 28
      Bevel.Mode = bmCustom
      MultiLine = True
      Options = []
      Caption = #1063#1080#1089#1083#1086' '#1092#1072#1081#1083#1086#1074
    end
    object PicDirEdit: TLMDEdit
      Left = 117
      Top = 35
      Width = 436
      Height = 21
      Bevel.Mode = bmWindows
      Caret.BlinkRate = 500
      TabOrder = 0
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
          OnClick = LMDEdit2CustomButtons0Click
          UsePngGlyph = False
        end>
      PasswordChar = #0
      Text = 'c:\Documents and Settings\Shulaev_AV\'#1052#1086#1080' '#1076#1086#1082#1091#1084#1077#1085#1090#1099'\'#1052#1086#1080' '#1088#1080#1089#1091#1085#1082#1080'\'
    end
  end
  object LMDMemo1: TLMDMemo
    Left = 0
    Top = 65
    Width = 783
    Height = 596
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    TabOrder = 1
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    HorizScrollBar.Back.Style = sfBrush
    HorizScrollBar.Back.Brush.Color = clBlue
    HorizScrollBar.Bevel.StyleInner = bvNormal
    HorizScrollBar.Bevel.StyleOuter = bvNormal
    HorizScrollBar.Bevel.BorderWidth = 1
    HorizScrollBar.Bevel.BorderInnerWidth = 1
    HorizScrollBar.Bevel.EdgeStyle = etRaised
    HorizScrollBar.Bevel.Mode = bmWindows
    HorizScrollBar.Bevel.StandardStyle = lsRaised
    HorizScrollBar.BackStyle = bsUser
    VertScrollBar.Back.Style = sfBrush
    VertScrollBar.Back.Brush.Color = clBlue
    VertScrollBar.Bevel.Mode = bmWindows
  end
  object HtmFileEdit: TLMDEdit
    Left = 117
    Top = 8
    Width = 437
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 530
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    CustomButtons = <
      item
        Hint = #1054#1090#1082#1088#1099#1090#1100
        Glyph.Data = {
          9E020000424D9E0200000000000036000000280000000E0000000E0000000100
          18000000000068020000000000000000000000000000000000005180D74FB6DE
          548DDD865BE5944BE7E212F8E212F8FF00FFFF00FFFF00FFFE00FEFF00FFFF00
          FFFE00FE000030A5D183D2EF72D4F86ED1F661C8EF52BEE743B3DF7576E46D70
          E0B333EDC525F1E90EFAFF00FFFE00FE000034AAD56FC5E477D6F873D5F773D5
          F873D5F873D5F772D4F76CD0F462C9EF51BDE56175DDFF00FFFE00FE000039AD
          D659BBDD88DDF67ADBF77ADBF77ADBF77ADBF77ADBF77ADBF77ADBF776D8F557
          A5E2E212F8FE00FE00003AAED84EB9E08BD8EF83E3F883E3F883E3F883E3F883
          E3F883E3F883E3F87FDFF66CD2ED8F55E6FE00FE00003CAFDA5DC2EA71C5E394
          EAF98BEAF964C5B5369A6465C6B68AE8F68BEAF987E6F783E3F36F91E3F505FC
          000044B1DC65C6F151B9E479C8E37BCCE57DCFE47BC2A8087C0C38A05D94E9ED
          97ECF798EBF47FD9EBB931EE000057B9DF6FCFF46FCFF46FCFF470D1F465CAEF
          57BBE1409B6C259F2744A159B7ECF1C5EFF5D3F7F98D6BE400006CC4E47BDAF6
          7BDAF67BD9F67BDAF67BDAF67BD9F64BB2A949AF4D47B14D6FB69AAEDCECBAE2
          EF65BBDB000070C7E488E5F788E5F788E4F788E5F788E5F788E4F758BBA071C4
          7894E09E26954F8D4AE4D31CF4D31CF4000075C1E396EFF894EFF894EFF893EF
          F852AD8352A65C7BBE82BDEAC3C8F2D096DCA4499455972A97FE00FE00009E4F
          E895E2F09AEDF69CEFF78AE3F16073DB874E90B8E1BDE1F8E6E2FAE8A6DAB19A
          439FFF00FFFE00FE0000F704FD915BE58377E2857AE3926AE6F009FBFE00FE95
          4E97ABDCB39CD9A7963F99FF00FFFF00FFFE00FE0000FE00FEFE00FEFE00FEFE
          00FEFE00FEFE00FEFE00FEFA01FA88468A923D94FC00FCFE00FEFE00FEFE00FE
          0000}
        ParentFont = False
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
        Hint = #1057#1086#1093#1088#1072#1085#1080#1090#1100
        Glyph.Data = {
          9E020000424D9E0200000000000036000000280000000E0000000E0000000100
          18000000000068020000000000000000000000000000000000005582D750B6DE
          548DDD865BE5944BE7E212F8E212F8FF00FFFF00FFFF00FFFE00FEFF00FFFF00
          FFFE00FE000039AAD492D9F372D4F86ED1F661C8EF52BEE743B3DF7576E46D70
          E0B333EDC525F1E90EFAFF00FFFE00FE000037ACD687D1EB77D6F873D5F773D5
          F873D5F873D5F772D4F76CD0F462C9EF50BDE56175DDFF00FFFE00FE000039AD
          D66DC5E38EDFF77ADBF77ADBF77ADBF77ADBF77ADBF77ADBF77ADBF776D8F557
          A5E2E212F8FE00FE00003BAED858BEE39AE0F383E3F883E3F883E3F883E3F883
          E3F883E3F883E3F87FE0F66CD2ED8F55E6FE00FE00003CAFDA5FC4EB88D1EA94
          EBF98BEAF98BEAF98BEAF98BEAF98BEAF98BEAF987E6F783E3F37494E5F505FC
          000044B1DC65C6F157BCE77FCCE687D1E891DAECADEEF89CF0FA9CF0FA9CF0FA
          98ECF798EBF47FDAEBB931EE000057B9DF6FCFF46FCFF46FCFF470D1F467CBF0
          63C2E5B4E4F1B8EAEB55B6726CBE95C4EEF3D3F7F9946FE600006CC4E47BDAF6
          7BDAF67BD9F67BDAF67BDAF67BD9F662C5DD5EAE7A7DE39459DB7B82C198BAE1
          EC65BBDB000070C8E488E5F788E5F788E4F788E5F788E5F788E4F73091536CB5
          70A0E4AB7EE7972AA241754195D31CF4000070C6E296EFF894EFF894EFF893EF
          F89DECF6A2ECF696E3E670CDB7A5DAAB74C484A032C8F404F4FE00FE00007F6B
          E195E2F09AEEF69CEFF78AE4F16073DBA838EAA838EA4B758CB7DFB85E8870FF
          00FFFF00FFFE00FE0000F704FD915BE58378E2857AE3926BE6D713E2AF20AFAA
          32AA75A87580A281DB13DBFF00FFFF00FFFE00FE0000FE00FEFE00FEFE00FEFE
          00FEFE00FEF503F57D347D733E73814981D812D8FE00FEFE00FEFE00FEFE00FE
          0000}
        ParentFont = False
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
  end
  object ReqFromTextChkBox: TLMDCheckBox
    Left = 568
    Top = 4
    Width = 145
    Height = 33
    Caption = #1054#1090#1074#1077#1090' '#1085#1072' '#1079#1072#1087#1088#1086#1089' '#1080#1079' '#1090#1077#1082#1089#1090#1086#1074#1086#1075#1086' '#1088#1077#1076#1072#1082#1090#1086#1088#1072
    Alignment.Alignment = agTopLeft
    Alignment.Spacing = 4
    TabOrder = 2
  end
  object LMDEdit3: TLMDEdit
    Left = 607
    Top = 35
    Width = 56
    Height = 21
    Bevel.Mode = bmWindows
    Caret.BlinkRate = 500
    TabOrder = 4
    CustomButtons = <>
    PasswordChar = #0
  end
  object SaveTextFileDialog1: TSaveTextFileDialog
    Left = 728
  end
end
