procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        var treeNode11: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('ToDo');
        var treeNode12: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('For later');
        var treeNode13: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Ideas');
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.taskVaultToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toDoToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.forLaterToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.ideasToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator1 := new System.Windows.Forms.ToolStripSeparator();
        self.fontToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.aboutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.imageList1 := new System.Windows.Forms.ImageList(self.components);
        self.splitContainer2 := new System.Windows.Forms.SplitContainer();
        self.contextMenuStrip1 := new System.Windows.Forms.ContextMenuStrip(self.components);
        self.fontToolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.fontDialog1 := new System.Windows.Forms.FontDialog();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.treeView1 := new System.Windows.Forms.TreeView();
        self.panel1 := new System.Windows.Forms.Panel();
        self.menuStrip1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.splitContainer2)).BeginInit();
        self.splitContainer2.SuspendLayout();
        self.contextMenuStrip1.SuspendLayout();
        self.panel1.SuspendLayout();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackgroundImage := (System.Drawing.Image(resources.GetObject('menuStrip1.BackgroundImage')));
        self.menuStrip1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.taskVaultToolStripMenuItem, self.aboutToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(584, 24);
        self.menuStrip1.TabIndex := 0;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // taskVaultToolStripMenuItem
        // 
        self.taskVaultToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[5](self.toDoToolStripMenuItem, self.forLaterToolStripMenuItem, self.ideasToolStripMenuItem, self.toolStripSeparator1, self.fontToolStripMenuItem));
        self.taskVaultToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.taskVaultToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('taskVaultToolStripMenuItem.Image')));
        self.taskVaultToolStripMenuItem.Name := 'taskVaultToolStripMenuItem';
        self.taskVaultToolStripMenuItem.Size := new System.Drawing.Size(83, 20);
        self.taskVaultToolStripMenuItem.Text := 'TaskVault';
        // 
        // toDoToolStripMenuItem
        // 
        self.toDoToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('toDoToolStripMenuItem.Image')));
        self.toDoToolStripMenuItem.Name := 'toDoToolStripMenuItem';
        self.toDoToolStripMenuItem.Size := new System.Drawing.Size(117, 22);
        self.toDoToolStripMenuItem.Text := 'ToDo';
        self.toDoToolStripMenuItem.Click += toDoToolStripMenuItem_Click;
        // 
        // forLaterToolStripMenuItem
        // 
        self.forLaterToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('forLaterToolStripMenuItem.Image')));
        self.forLaterToolStripMenuItem.Name := 'forLaterToolStripMenuItem';
        self.forLaterToolStripMenuItem.Size := new System.Drawing.Size(117, 22);
        self.forLaterToolStripMenuItem.Text := 'For later';
        self.forLaterToolStripMenuItem.Click += forLaterToolStripMenuItem_Click;
        // 
        // ideasToolStripMenuItem
        // 
        self.ideasToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('ideasToolStripMenuItem.Image')));
        self.ideasToolStripMenuItem.Name := 'ideasToolStripMenuItem';
        self.ideasToolStripMenuItem.Size := new System.Drawing.Size(117, 22);
        self.ideasToolStripMenuItem.Text := 'Ideas';
        self.ideasToolStripMenuItem.Click += ideasToolStripMenuItem_Click;
        // 
        // toolStripSeparator1
        // 
        self.toolStripSeparator1.Name := 'toolStripSeparator1';
        self.toolStripSeparator1.Size := new System.Drawing.Size(114, 6);
        // 
        // fontToolStripMenuItem
        // 
        self.fontToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('fontToolStripMenuItem.Image')));
        self.fontToolStripMenuItem.Name := 'fontToolStripMenuItem';
        self.fontToolStripMenuItem.Size := new System.Drawing.Size(117, 22);
        self.fontToolStripMenuItem.Text := 'Font';
        self.fontToolStripMenuItem.Click += fontToolStripMenuItem_Click;
        // 
        // aboutToolStripMenuItem
        // 
        self.aboutToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.aboutToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('aboutToolStripMenuItem.Image')));
        self.aboutToolStripMenuItem.Name := 'aboutToolStripMenuItem';
        self.aboutToolStripMenuItem.Size := new System.Drawing.Size(68, 20);
        self.aboutToolStripMenuItem.Text := 'About';
        self.aboutToolStripMenuItem.Click += aboutToolStripMenuItem_Click;
        // 
        // imageList1
        // 
        self.imageList1.ImageStream := (System.Windows.Forms.ImageListStreamer(resources.GetObject('imageList1.ImageStream')));
        self.imageList1.TransparentColor := System.Drawing.Color.Transparent;
        self.imageList1.Images.SetKeyName(0, 'ToDo');
        self.imageList1.Images.SetKeyName(1, 'For later');
        self.imageList1.Images.SetKeyName(2, 'Ideas');
        // 
        // splitContainer2
        // 
        self.splitContainer2.Dock := System.Windows.Forms.DockStyle.Fill;
        self.splitContainer2.Location := new System.Drawing.Point(0, 0);
        self.splitContainer2.Name := 'splitContainer2';
        self.splitContainer2.Size := new System.Drawing.Size(150, 337);
        self.splitContainer2.SplitterDistance := 110;
        self.splitContainer2.TabIndex := 0;
        // 
        // contextMenuStrip1
        // 
        self.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[1](self.fontToolStripMenuItem1));
        self.contextMenuStrip1.Name := 'contextMenuStrip1';
        self.contextMenuStrip1.Size := new System.Drawing.Size(99, 26);
        // 
        // fontToolStripMenuItem1
        // 
        self.fontToolStripMenuItem1.Image := (System.Drawing.Image(resources.GetObject('fontToolStripMenuItem1.Image')));
        self.fontToolStripMenuItem1.Name := 'fontToolStripMenuItem1';
        self.fontToolStripMenuItem1.Size := new System.Drawing.Size(98, 22);
        self.fontToolStripMenuItem1.Text := 'Font';
        self.fontToolStripMenuItem1.Click += fontToolStripMenuItem1_Click;
        // 
        // fontDialog1
        // 
        self.fontDialog1.Font := new System.Drawing.Font('Segoe UI', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        // 
        // textBox1
        // 
        self.textBox1.ContextMenuStrip := self.contextMenuStrip1;
        self.textBox1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.textBox1.Font := new System.Drawing.Font('Segoe UI', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.Location := new System.Drawing.Point(150, 24);
        self.textBox1.Multiline := true;
        self.textBox1.Name := 'textBox1';
        self.textBox1.ScrollBars := System.Windows.Forms.ScrollBars.Vertical;
        self.textBox1.Size := new System.Drawing.Size(434, 337);
        self.textBox1.TabIndex := 3;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // treeView1
        // 
        self.treeView1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.treeView1.ImageIndex := 0;
        self.treeView1.ImageList := self.imageList1;
        self.treeView1.Location := new System.Drawing.Point(0, 0);
        self.treeView1.Name := 'treeView1';
        treeNode11.ImageKey := 'ToDo';
        treeNode11.Name := 'Узел0';
        treeNode11.SelectedImageKey := 'ToDo';
        treeNode11.Text := 'ToDo';
        treeNode12.ImageKey := 'For later';
        treeNode12.Name := 'Узел1';
        treeNode12.SelectedImageKey := 'For later';
        treeNode12.Text := 'For later';
        treeNode13.ImageKey := 'Ideas';
        treeNode13.Name := 'Узел2';
        treeNode13.SelectedImageKey := 'Ideas';
        treeNode13.Text := 'Ideas';
        self.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[3](treeNode11, treeNode12, treeNode13));
        self.treeView1.SelectedImageIndex := 0;
        self.treeView1.Size := new System.Drawing.Size(150, 337);
        self.treeView1.TabIndex := 0;
        self.treeView1.AfterSelect += treeView1_AfterSelect;
        // 
        // panel1
        // 
        self.panel1.Controls.Add(self.treeView1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Left;
        self.panel1.Location := new System.Drawing.Point(0, 24);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(150, 337);
        self.panel1.TabIndex := 2;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(584, 361);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.panel1);
        self.Controls.Add(self.menuStrip1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MinimumSize := new System.Drawing.Size(500, 250);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'TaskVault';
        self.Load += Form1_Load;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        (System.ComponentModel.ISupportInitialize(self.splitContainer2)).EndInit();
        self.splitContainer2.ResumeLayout(false);
        self.contextMenuStrip1.ResumeLayout(false);
        self.panel1.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
