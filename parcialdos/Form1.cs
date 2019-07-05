using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace parcialdos
{
    public partial class Form1 : Form
    {
        bool TextoCambiado = false;
        bool cambio = true;
        string narchivo = "";
        public Form1()
        {
            InitializeComponent();
        }

        private void ImprimirToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void AcercaDeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            AcercaDe acercaDe = new AcercaDe();
            acercaDe.ShowDialog();
        }

        private void SalirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            DialogResult dialog = MessageBox.Show(this, "¿Desea cerral la aplicacion?", "Mi aplicacion", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            if (dialog == DialogResult.No)
            {
                e.Cancel = true;
            }
        }


        private void AbrirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (!TextoCambiado)
            {
                cambio = false;
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    richTextBox1.LoadFile(openFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                }
                narchivo = openFileDialog1.FileName;
                cambio = true;
            }
            else
            {
                DialogResult dialog = MessageBox.Show(this, "Tiene texto Modificado/n ¿Desea Guardarlo en el archivo actual?", "Mi aplicacion", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);
                if (dialog == DialogResult.Cancel)
                {
                    new CancelEventArgs().Cancel = true;
                }
                else if (dialog == DialogResult.Yes)
                {
                    if (narchivo == "")
                    {
                        MessageBox.Show("guardar como");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            narchivo = saveFileDialog1.FileName;
                        }
                    }
                    else
                    {
                        MessageBox.Show("guardar");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            narchivo = saveFileDialog1.FileName;
                        }

                    }
                }
                else if (dialog == DialogResult.No)
                {
                    MessageBox.Show("guardar como");
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                        narchivo = saveFileDialog1.FileName;
                    }
                }
            }
        }
        private void RichTextBox1_TextChanged(object sender, EventArgs e)
        {
            if (cambio)
            {
                TextoCambiado = true;
            }
        }

        private void NuevoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (!TextoCambiado)
            {
                richTextBox1.Clear();
                narchivo = "";
            }
            else
            {
                DialogResult dialog = MessageBox.Show(this, "Tiene texto Modificado/n ¿Desea Guardarlo en el archivo actual?", "Mi aplicacion", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Question);
                if (dialog == DialogResult.Yes)
                {
                    if (narchivo == "")
                    {
                        MessageBox.Show("guardar como");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            narchivo = saveFileDialog1.FileName;
                        }
                    }
                    /*else
                    {
                        MessageBox.Show("guardar");
                        if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                        {
                            richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                            narchivo = saveFileDialog1.FileName;
                        }
                    }*/
                }
                if (dialog == DialogResult.No)
                {
                    MessageBox.Show("guardar como");
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                        narchivo = saveFileDialog1.FileName;
                    }
                }
                if (dialog == DialogResult.Cancel)
                {
                    new CancelEventArgs().Cancel = true;
                }
            }
        }

        private void GuardarToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (narchivo == "")
            {
                MessageBox.Show("guardar como");
                if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                    narchivo = saveFileDialog1.FileName;
                }
            }
            else
            {
                //MessageBox.Show("guardar");
                if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                    narchivo = saveFileDialog1.FileName;
                }
            }
        }

        private void GuardarComoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                richTextBox1.SaveFile(saveFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                narchivo = saveFileDialog1.FileName;
            }
        }

      
        private void ToolStripStatusLabel1_Click(object sender, EventArgs e)
        {
            toolStripStatusLabel1.Text = narchivo;
        }
    }
}
