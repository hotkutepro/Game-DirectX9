using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MyMap
{
    public partial class Form1 : Form
    {
        int _column = 0;
        int _row = 0;
        int[,] _arrmap;
        Queue<Rectangle> qRectDest = new Queue<Rectangle>();
        Bitmap _img;
        Bitmap _dest;
        int _width = 0;
        int _height = 0;
        tiled _tiled = new tiled();
        Image _image;
        Graphics gf;
        public Form1()
        {
            InitializeComponent();
        }
        public void createmap()
        {                       
            _arrmap = new int[_row, _column];
            List<tiled> listtiled = new List<tiled>();

            for (int i = 0; i < _column; i++)
                for (int j = 0; j < _row; j++)
                    listtiled.Add(new tiled(new Rectangle(i * _width, j * _height, _width, _height), new Point(j, i)));
            int index = 1;
            while (listtiled.Count != 0)
            {
                tiled tmp = listtiled[0];
                listtiled.RemoveAt(0);
                qRectDest.Enqueue(tmp.rec);
                _arrmap[tmp.point.X, tmp.point.Y] = index;
                int i = 0;
                while (i < listtiled.Count)
                {
                    tiled t = listtiled[i];
                    if (checkPixels(tmp.rec, t.rec))
                    {
                        _arrmap[t.point.X, t.point.Y] = index;
                        listtiled.Remove(t);
                        i--;
                    }
                    i++;
                }
                index++;
            }
        }
        private void writemap(string filename)
        {
            using (var stream = new FileStream(filename + ".txt", FileMode.Create, FileAccess.Write, FileShare.None))
            using (var writer = new StreamWriter(stream))
            {
                writer.Write(_column + " " + _row + "\r\n");
                for (int i = 0; i < _row; i++)
                {
                    for (int j = 0; j < _column; j++)
                    {
                        ///////////////////////////
                        writer.Write(_arrmap[i, j] + " ");
                    }
                    writer.Write("\r\n");
                }
            }
        }
        private bool checkPixels(Rectangle r1, Rectangle r2)
        {
            Color[] cl1 = new Color[_width * _height];
            Color[] cl2 = new Color[_width * _height];
            int k = 0;
            for (int i = r1.Left; i < r1.Right; i++)
                for (int j = r1.Top; j < r1.Bottom; j++)
                {
                    cl1[k++] = this._img.GetPixel(i, j);
                }
            k = 0;
            for (int i = r2.Left; i < r2.Right; i++)
                for (int j = r2.Top; j < r2.Bottom; j++)
                {
                    cl2[k++] = this._img.GetPixel(i, j);
                }
            for (int i = 0; i < _width * _height; i++)
                if (cl1[i] != cl2[i])
                    return false;
            return true;
        }
        private void drawMap()
        {
            int i = 0;
            _dest = new Bitmap(qRectDest.Count * _width, _height);
            foreach (Rectangle r in qRectDest)
            {
                Rectangle rDest = new Rectangle(i++ * _width, 0, _width, _height);
                using (Graphics g = Graphics.FromImage(_dest))
                {
                    g.DrawImage(_img, rDest, r, GraphicsUnit.Pixel);
                }
            }
        }
        private void saveTiledMap(string filename)
        {
            string outputFileName = filename + ".Png";
            using (MemoryStream ms = new MemoryStream())
            {
                using (FileStream fs = new FileStream(outputFileName, FileMode.Create, FileAccess.ReadWrite))
                {
                    _dest.Save(ms, ImageFormat.Png);
                    byte[] bytes = ms.ToArray();
                    fs.Write(bytes, 0, bytes.Length);
                }
            }
        }        
        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }
        private void label16_Click(object sender, EventArgs e)
        {

        }
        private void tbtw_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.Handled = !((e.KeyChar >= 48 && e.KeyChar <= 57) || e.KeyChar == 8);
        }

        private void tbth_KeyPress(object sender, KeyPressEventArgs e)
        {
            e.Handled = !((e.KeyChar >= 48 && e.KeyChar <= 57) || e.KeyChar == 8);
        }

        private void btThoat_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void btbrowses_Click(object sender, EventArgs e)
        {
            try
            {                
                gf = CreateGraphics();
                OpenFileDialog openFile = new OpenFileDialog();
                if (openFile.ShowDialog() == System.Windows.Forms.DialogResult.OK)
                {
                    tbsourse.Text = openFile.FileName;
                }

                _image = Image.FromFile(tbsourse.Text);                
                pictureBox1.Image = Image.FromFile(tbsourse.Text);
                _img = new Bitmap(tbsourse.Text);
                tbw.Text = "" + _img.Width;
                tbh.Text = "" + _img.Height;                
                _width = int.Parse(tbtw.Text);
                _height = int.Parse(tbth.Text);                
                _column = _img.Width / _width;
                _row = _img.Height / _height;
            }
            catch (Exception ex) { }
        }

        private void btBrowsesI_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog fbd = new FolderBrowserDialog();
            if (fbd.ShowDialog() == System.Windows.Forms.DialogResult.OK)
            {
                tbnoiluuim.Text = fbd.SelectedPath;
            }
        }        
        private void btDuyet_Click(object sender, EventArgs e)
        {         
            createmap();
            writemap(tbnoiluuim.Text + "\\" + tbIn.Text);
            drawMap();
            saveTiledMap(tbnoiluuim.Text + "\\" + tbIn.Text);
            MessageBox.Show("Success", "Notice", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void tbth_TextChanged(object sender, EventArgs e)
        {
            try
            {
                int w = int.Parse(tbtw.Text);
                int h = int.Parse(tbth.Text);
                _width = int.Parse(tbtw.Text);
                _height = int.Parse(tbth.Text);
                _row = _img.Height / h;
                _column = _img.Width / w;
                if (_img.Width % w == 0 && _img.Height % h == 0)
                {
                    btDuyet.Enabled = true;
                    lbtile.Text = "Tương xứng tỉ lệ";
                }
                else
                {
                    btDuyet.Enabled = false;
                    lbtile.Text = "Chưa Tương xứng tỉ lệ";
                }
            }
            catch (Exception ex)
            {
                btDuyet.Enabled = false;
            }
        }

        private void tbtw_TextChanged(object sender, EventArgs e)
        {
            try
            {
                int w = int.Parse(tbtw.Text);                
                int h = int.Parse(tbth.Text);
                _width = int.Parse(tbtw.Text);
                _height = int.Parse(tbth.Text);
                
                if (_img.Width % w == 0 && _img.Height % h == 0)
                {
                    btDuyet.Enabled = true;
                    lbtile.Text = "Tương xứng tỉ lệ";
                }
                else { 
                    btDuyet.Enabled = false;
                    lbtile.Text = "Chưa Tương xứng tỉ lệ";
                }
            }
            catch (Exception ex)
            {
                btDuyet.Enabled = false;
            }
        }
        
    }
    public class tiled
    {
        private Rectangle _rec;
        public System.Drawing.Rectangle rec
        {
            get { return _rec; }
            set { _rec = value; }
        }
        private Point _point;
        public System.Drawing.Point point
        {
            get { return _point; }
            set { _point = value; }
        }
        public tiled()
        {
            _rec = new Rectangle();
            _point = new Point();
        }
        public tiled(Rectangle rec, Point point)
        {
            this._rec = rec;
            this._point = point;
        }        
    }
}
