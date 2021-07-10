Unit About;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  AboutTaskVault = class(Form)
    procedure linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
  {$region FormDesigner}
  private
    {$resource About.AboutTaskVault.resources}
    linkLabel1: LinkLabel;
    tabControl1: TabControl;
    tabPage1: TabPage;
    richTextBox1: RichTextBox;
    pictureBox1: PictureBox;
    {$include About.AboutTaskVault.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure AboutTaskVault.linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  exec('https://github.com/MichaelAgarkov');
end;

end.
