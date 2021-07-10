unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms, About;

var
  SavedToDo, SavedForLater, SavedIdeas: string;

type
  Form1 = class(Form)
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
    procedure Panel2_SizeChanged(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure toDoToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure forLaterToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure ideasToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure fontToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure fontToolStripMenuItem1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    menuStrip1: MenuStrip;
    taskVaultToolStripMenuItem: ToolStripMenuItem;
    button1: Button;
    treeView1: TreeView;
    button2: Button;
    splitContainer2: SplitContainer;
    splitContainer1: SplitContainer;
    splitContainer3: SplitContainer;
    toDoToolStripMenuItem: ToolStripMenuItem;
    forLaterToolStripMenuItem: ToolStripMenuItem;
    ideasToolStripMenuItem: ToolStripMenuItem;
    imageList1: ImageList;
    components: System.ComponentModel.IContainer;
    toolStripSeparator1: ToolStripSeparator;
    fontToolStripMenuItem: ToolStripMenuItem;
    fontDialog1: FontDialog;
    textBox1: TextBox;
    contextMenuStrip1: System.Windows.Forms.ContextMenuStrip;
    fontToolStripMenuItem1: ToolStripMenuItem;
    aboutToolStripMenuItem: ToolStripMenuItem;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
begin
  if(treeView1.SelectedNode = treeView1.Nodes[0]) then begin
    try
      var ToDoFile := new System.IO.StreamReader('ToDo.txt', System.Text.Encoding.Default);
      textBox1.Text := ToDoFile.ReadToEnd;
      ToDoFile.Close;
    except
      textBox1.Text := SavedToDo;
    end;
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[1]) then begin
    try
      var ForLaterFile := new System.IO.StreamReader('ForLater.txt', System.Text.Encoding.Default);
      textBox1.Text := ForLaterFile.ReadToEnd;
      ForLaterFile.Close;
    except
      textBox1.Text := SavedForLater;
    end;
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[2]) then begin
    try
      var IdeasFile := new System.IO.StreamReader('Ideas.txt', System.Text.Encoding.Default);
      textBox1.Text := IdeasFile.ReadToEnd;
      IdeasFile.Close;
    except
      textBox1.Text := SavedIdeas;
    end;
  end;
end;

procedure Form1.Panel2_SizeChanged(sender: Object; e: EventArgs);
begin
  button1.Size := System.Drawing.Size.Create(splitContainer1.SplitterDistance - 24, 23);
  button2.Size := System.Drawing.Size.Create(splitContainer1.SplitterDistance - 24, 23);
end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  if(treeView1.SelectedNode = treeView1.Nodes[0]) then SavedToDo := textBox1.Text;
  if(treeView1.SelectedNode = treeView1.Nodes[1]) then SavedForLater := textBox1.Text;
  if(treeView1.SelectedNode = treeView1.Nodes[2]) then SavedIdeas := textBox1.Text;
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  if(treeView1.SelectedNode = treeView1.Nodes[0]) then begin
    var ToDoFile := new System.IO.StreamWriter('ToDo.txt', false, System.Text.Encoding.Default);
    ToDoFile.Write(textBox1.Text);
    ToDoFile.Close;
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[1]) then begin
    var ForLaterFile := new System.IO.StreamWriter('ForLater.txt', false, System.Text.Encoding.Default);
    ForLaterFile.Write(textBox1.Text);
    ForLaterFile.Close;
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[2]) then begin
    var IdeasFile := new System.IO.StreamWriter('Ideas.txt', false, System.Text.Encoding.Default);
    IdeasFile.Write(textBox1.Text);
    IdeasFile.Close;
  end;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  if(treeView1.SelectedNode = treeView1.Nodes[0]) then begin
    try
      var ToDoFile := new System.IO.StreamReader('ToDo.txt', System.Text.Encoding.Default);
      textBox1.Text := ToDoFile.ReadToEnd;
      ToDoFile.Close;
    except
    end;
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[1]) then begin
    try
      var ForLaterFile := new System.IO.StreamReader('ForLater.txt', System.Text.Encoding.Default);
      textBox1.Text := ForLaterFile.ReadToEnd;
      ForLaterFile.Close;
    except
    end;
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[2]) then begin
    try
      var IdeasFile := new System.IO.StreamReader('Ideas.txt', System.Text.Encoding.Default);
      textBox1.Text := IdeasFile.ReadToEnd;
      IdeasFile.Close;
    except
    end;
  end;
end;

procedure Form1.aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Form(new AboutTaskVault).show;
end;

procedure Form1.toDoToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  treeView1.SelectedNode := treeView1.Nodes[0];
end;

procedure Form1.forLaterToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  treeView1.SelectedNode := treeView1.Nodes[1];
end;

procedure Form1.ideasToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  treeView1.SelectedNode := treeView1.Nodes[2];
end;

procedure Form1.fontToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  fontDialog1.ShowDialog;
  textBox1.Font := fontDialog1.Font;
end;

procedure Form1.fontToolStripMenuItem1_Click(sender: Object; e: EventArgs);
begin
  fontDialog1.ShowDialog;
  textBox1.Font := fontDialog1.Font;
end;

end.
