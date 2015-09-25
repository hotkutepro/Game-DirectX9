namespace MyMap
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btbrowses = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.tbsourse = new System.Windows.Forms.TextBox();
            this.lbif = new System.Windows.Forms.Label();
            this.lbf = new System.Windows.Forms.Label();
            this.panel1 = new System.Windows.Forms.Panel();
            this.btnImage = new System.Windows.Forms.Button();
            this.btnGetObject = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.panel2 = new System.Windows.Forms.Panel();
            this.button3 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.btAddtiled = new System.Windows.Forms.Button();
            this.label22 = new System.Windows.Forms.Label();
            this.label21 = new System.Windows.Forms.Label();
            this.tbth = new System.Windows.Forms.TextBox();
            this.label12 = new System.Windows.Forms.Label();
            this.tbtw = new System.Windows.Forms.TextBox();
            this.label11 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.tbIn = new System.Windows.Forms.TextBox();
            this.tbnoiluuim = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.btBrowsesI = new System.Windows.Forms.Button();
            this.label10 = new System.Windows.Forms.Label();
            this.label14 = new System.Windows.Forms.Label();
            this.label16 = new System.Windows.Forms.Label();
            this.btDuyet = new System.Windows.Forms.Button();
            this.btnKiemTra = new System.Windows.Forms.Button();
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.SuspendLayout();
            // 
            // btbrowses
            // 
            this.btbrowses.Location = new System.Drawing.Point(503, 12);
            this.btbrowses.Name = "btbrowses";
            this.btbrowses.Size = new System.Drawing.Size(75, 23);
            this.btbrowses.TabIndex = 0;
            this.btbrowses.Text = "Browses";
            this.btbrowses.UseVisualStyleBackColor = true;
            this.btbrowses.Click += new System.EventHandler(this.btbrowses_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 17);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(44, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "File ảnh";
            // 
            // tbsourse
            // 
            this.tbsourse.Enabled = false;
            this.tbsourse.Location = new System.Drawing.Point(116, 14);
            this.tbsourse.Name = "tbsourse";
            this.tbsourse.Size = new System.Drawing.Size(367, 20);
            this.tbsourse.TabIndex = 2;
            // 
            // lbif
            // 
            this.lbif.AutoSize = true;
            this.lbif.Location = new System.Drawing.Point(12, 65);
            this.lbif.Name = "lbif";
            this.lbif.Size = new System.Drawing.Size(0, 13);
            this.lbif.TabIndex = 3;
            // 
            // lbf
            // 
            this.lbf.AutoSize = true;
            this.lbf.Location = new System.Drawing.Point(633, 51);
            this.lbf.Name = "lbf";
            this.lbf.Size = new System.Drawing.Size(0, 13);
            this.lbf.TabIndex = 4;
            // 
            // panel1
            // 
            this.panel1.AutoScroll = true;
            this.panel1.Controls.Add(this.btnImage);
            this.panel1.Location = new System.Drawing.Point(44, 125);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(789, 428);
            this.panel1.TabIndex = 6;
            this.panel1.Paint += new System.Windows.Forms.PaintEventHandler(this.panel1_Paint);
            // 
            // btnImage
            // 
            this.btnImage.AutoSize = true;
            this.btnImage.Enabled = false;
            this.btnImage.Location = new System.Drawing.Point(3, 3);
            this.btnImage.Name = "btnImage";
            this.btnImage.Size = new System.Drawing.Size(75, 23);
            this.btnImage.TabIndex = 0;
            this.btnImage.UseVisualStyleBackColor = true;
            this.btnImage.MouseClick += new System.Windows.Forms.MouseEventHandler(this.btnImage_MouseClick);
            // 
            // btnGetObject
            // 
            this.btnGetObject.Enabled = false;
            this.btnGetObject.Location = new System.Drawing.Point(570, 67);
            this.btnGetObject.Name = "btnGetObject";
            this.btnGetObject.Size = new System.Drawing.Size(75, 23);
            this.btnGetObject.TabIndex = 7;
            this.btnGetObject.Text = "GetObject";
            this.btnGetObject.UseVisualStyleBackColor = true;
            this.btnGetObject.Click += new System.EventHandler(this.btnGetObject_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.ForeColor = System.Drawing.Color.Red;
            this.label2.Location = new System.Drawing.Point(3, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(108, 13);
            this.label2.TabIndex = 8;
            this.label2.Text = "Kích Thước hình ảnh";
            // 
            // panel2
            // 
            this.panel2.AutoScroll = true;
            this.panel2.Controls.Add(this.button3);
            this.panel2.Controls.Add(this.button2);
            this.panel2.Controls.Add(this.button1);
            this.panel2.Controls.Add(this.btAddtiled);
            this.panel2.Controls.Add(this.label2);
            this.panel2.Location = new System.Drawing.Point(836, 17);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(221, 536);
            this.panel2.TabIndex = 11;
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(58, 50);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(75, 23);
            this.button3.TabIndex = 34;
            this.button3.Text = "Xóa";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(6, 50);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(31, 23);
            this.button2.TabIndex = 33;
            this.button2.Text = "x";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(98, 18);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 32;
            this.button1.Text = "OpenFoder";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // btAddtiled
            // 
            this.btAddtiled.Enabled = false;
            this.btAddtiled.Location = new System.Drawing.Point(6, 18);
            this.btAddtiled.Name = "btAddtiled";
            this.btAddtiled.Size = new System.Drawing.Size(75, 23);
            this.btAddtiled.TabIndex = 31;
            this.btAddtiled.Text = "Add Object";
            this.btAddtiled.UseVisualStyleBackColor = true;
            this.btAddtiled.Click += new System.EventHandler(this._btAddtiled_Click);
            // 
            // label22
            // 
            this.label22.AutoSize = true;
            this.label22.Location = new System.Drawing.Point(367, 72);
            this.label22.Name = "label22";
            this.label22.Size = new System.Drawing.Size(18, 13);
            this.label22.TabIndex = 30;
            this.label22.Text = "px";
            // 
            // label21
            // 
            this.label21.AutoSize = true;
            this.label21.Location = new System.Drawing.Point(184, 72);
            this.label21.Name = "label21";
            this.label21.Size = new System.Drawing.Size(18, 13);
            this.label21.TabIndex = 29;
            this.label21.Text = "px";
            // 
            // tbth
            // 
            this.tbth.Location = new System.Drawing.Point(295, 67);
            this.tbth.Name = "tbth";
            this.tbth.Size = new System.Drawing.Size(66, 20);
            this.tbth.TabIndex = 18;
            this.tbth.Text = "32";
            this.tbth.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.tbth_KeyPress);
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Location = new System.Drawing.Point(222, 72);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(67, 13);
            this.label12.TabIndex = 17;
            this.label12.Text = "Title Height: ";
            // 
            // tbtw
            // 
            this.tbtw.Location = new System.Drawing.Point(116, 65);
            this.tbtw.Name = "tbtw";
            this.tbtw.Size = new System.Drawing.Size(66, 20);
            this.tbtw.TabIndex = 16;
            this.tbtw.Text = "32";
            this.tbtw.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.tbtw_KeyPress);
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(37, 72);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(64, 13);
            this.label11.TabIndex = 15;
            this.label11.Text = "Title Width: ";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(12, 40);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(0, 13);
            this.label6.TabIndex = 12;
            // 
            // tbIn
            // 
            this.tbIn.Location = new System.Drawing.Point(116, 42);
            this.tbIn.Name = "tbIn";
            this.tbIn.Size = new System.Drawing.Size(100, 20);
            this.tbIn.TabIndex = 13;
            this.tbIn.Text = "hihi";
            // 
            // tbnoiluuim
            // 
            this.tbnoiluuim.Enabled = false;
            this.tbnoiluuim.Location = new System.Drawing.Point(272, 41);
            this.tbnoiluuim.Name = "tbnoiluuim";
            this.tbnoiluuim.Size = new System.Drawing.Size(198, 20);
            this.tbnoiluuim.TabIndex = 15;
            this.tbnoiluuim.Text = "D:\\";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(12, 45);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(89, 13);
            this.label7.TabIndex = 16;
            this.label7.Text = "Image/text Name";
            // 
            // btBrowsesI
            // 
            this.btBrowsesI.Location = new System.Drawing.Point(503, 41);
            this.btBrowsesI.Name = "btBrowsesI";
            this.btBrowsesI.Size = new System.Drawing.Size(75, 23);
            this.btBrowsesI.TabIndex = 17;
            this.btBrowsesI.Text = "Browses";
            this.btBrowsesI.UseVisualStyleBackColor = true;
            this.btBrowsesI.Click += new System.EventHandler(this.btBrowsesI_Click);
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Location = new System.Drawing.Point(222, 45);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(44, 13);
            this.label10.TabIndex = 21;
            this.label10.Text = "Nơi Lưu";
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(192)))));
            this.label14.Location = new System.Drawing.Point(584, 17);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(56, 13);
            this.label14.TabIndex = 20;
            this.label14.Text = "(Bắt buộc)";
            // 
            // label16
            // 
            this.label16.AutoSize = true;
            this.label16.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(128)))), ((int)(((byte)(128)))), ((int)(((byte)(255)))));
            this.label16.Location = new System.Drawing.Point(584, 48);
            this.label16.Name = "label16";
            this.label16.Size = new System.Drawing.Size(89, 13);
            this.label16.TabIndex = 25;
            this.label16.Text = "(Không bắt buộc)";
            // 
            // btDuyet
            // 
            this.btDuyet.Enabled = false;
            this.btDuyet.Location = new System.Drawing.Point(489, 67);
            this.btDuyet.Name = "btDuyet";
            this.btDuyet.Size = new System.Drawing.Size(75, 23);
            this.btDuyet.TabIndex = 26;
            this.btDuyet.Text = "GetMap";
            this.btDuyet.UseVisualStyleBackColor = true;
            this.btDuyet.Click += new System.EventHandler(this.btDuyet_Click);
            // 
            // btnKiemTra
            // 
            this.btnKiemTra.Location = new System.Drawing.Point(408, 67);
            this.btnKiemTra.Name = "btnKiemTra";
            this.btnKiemTra.Size = new System.Drawing.Size(75, 23);
            this.btnKiemTra.TabIndex = 31;
            this.btnKiemTra.Text = "Kiểm Tra";
            this.btnKiemTra.UseVisualStyleBackColor = true;
            this.btnKiemTra.Click += new System.EventHandler(this.btnKiemTra_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1069, 565);
            this.Controls.Add(this.btnKiemTra);
            this.Controls.Add(this.btDuyet);
            this.Controls.Add(this.label16);
            this.Controls.Add(this.btnGetObject);
            this.Controls.Add(this.label22);
            this.Controls.Add(this.label14);
            this.Controls.Add(this.label21);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.btBrowsesI);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.tbnoiluuim);
            this.Controls.Add(this.tbth);
            this.Controls.Add(this.tbIn);
            this.Controls.Add(this.label12);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.tbtw);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.lbf);
            this.Controls.Add(this.lbif);
            this.Controls.Add(this.tbsourse);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btbrowses);
            this.ForeColor = System.Drawing.Color.Black;
            this.Name = "Form1";
            this.Text = "My Map";
            this.panel1.ResumeLayout(false);
            this.panel1.PerformLayout();
            this.panel2.ResumeLayout(false);
            this.panel2.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btbrowses;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox tbsourse;
        private System.Windows.Forms.Label lbif;
        private System.Windows.Forms.Label lbf;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Button btnGetObject;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox tbIn;
        private System.Windows.Forms.TextBox tbnoiluuim;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Button btBrowsesI;
        private System.Windows.Forms.TextBox tbth;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.TextBox tbtw;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.Label label16;
        private System.Windows.Forms.Label label22;
        private System.Windows.Forms.Label label21;
        private System.Windows.Forms.Button btDuyet;
        private System.Windows.Forms.Button btAddtiled;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button btnKiemTra;
        private System.Windows.Forms.Button btnImage;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;

    }
}

